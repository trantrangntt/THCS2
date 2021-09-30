#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ten;
    string lop;
    int ns;
    int thang;
    int nam;
    char c;
    float d;
};
void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ns;
    cin >> a.c;
    cin >> a.thang;
    cin >> a.c;
    cin >> a.nam;
    cin >> a.d;
}
void in(SinhVien &a)
{
    cout << "B20DCCN001 " << a.ten << " " << a.lop << " ";
    if (a.ns < 10)
        cout << "0" << a.ns << a.c;
    else
        cout << a.ns << "/";
    ;
    if (a.thang < 10)
        cout << "0" << a.thang << a.c;
    else
        cout << a.thang << "/";
    cout << a.nam << " ";
    cout << fixed << setprecision(2) << a.d;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}