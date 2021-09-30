#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu, mau;
    long long k;
};

void rutgon(PhanSo &p)
{
    p.k = __gcd(p.tu, p.mau);
    p.tu = (p.tu) / p.k;
    p.mau = (p.mau) / p.k;
}
void process(PhanSo &a, PhanSo &b)
{
    PhanSo c, d, e;
    c.tu = (b.mau * a.tu + a.mau * b.tu) * (b.mau * a.tu + a.mau * b.tu);
    c.mau = (b.mau * a.mau) * (b.mau * a.mau);
    rutgon(c);
    cout << c.tu << "/" << c.mau << " ";
    e.tu = a.tu * b.tu * c.tu;
    e.mau = a.mau * b.mau * c.mau;

    rutgon(e);
    cout << e.tu << "/" << e.mau;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}