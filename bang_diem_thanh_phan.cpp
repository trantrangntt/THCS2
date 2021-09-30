#include <bits/stdc++.h>
using namespace std;
struct sv
{
    string msv;
    string ten;
    string lop;
    float d1, d2, d3;
};
bool dk(sv a, sv b)
{
    if (a.ten > b.ten)
        return false;
    return true;
}
void nhap(sv a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].msv);
        scanf("\n");
        getline(cin, a[i].ten);
        scanf("\n");
        getline(cin, a[i].lop);
        scanf("\n");
        cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a, a + n, dk);
}
void in(sv a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " ";
        cout << fixed << setprecision(1) << a[i].d2 << " ";
        cout << fixed << setprecision(1) << a[i].d3;
        cout << endl;
    }
}
int main()
{
    int n;
    struct sv a[50];
    cin >> n;
    nhap(a, n);
    in(a, n);
}