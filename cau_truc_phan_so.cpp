#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long t, m, k;
};
void nhap(PhanSo &p)
{
    cin >> p.t >> p.m;
}
void rutgon(PhanSo &p)
{
    p.k = __gcd(p.t, p.m);
    p.t = (p.t) / p.k;
    p.m = (p.m) / p.k;
}
void in(PhanSo &p)
{
    cout << p.t << "/" << p.m;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}