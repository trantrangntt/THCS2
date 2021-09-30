#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ten;
    string gt;
    string ns;
    string dc;
    string ms;
    string hd;
};
void nhap(NhanVien &a)
{

    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.ms);
    getline(cin, a.hd);
}
void in(NhanVien &a)
{
    cout << "00001"
         << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.ms << " " << a.hd;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}