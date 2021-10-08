#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string name, clas, dob;
    float gpa;
};
void nhapThongTinSV(struct SinhVien &a)
{
    getline(cin, a.name);
    cin >> a.clas;
    cin >> a.dob;
    cin >> a.gpa;
    if (a.dob[2] != '/')
        a.dob.insert(0, "0");
    if (a.dob[5] != '/')
        a.dob.insert(3, "0");
}

void inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001"
         << "   ";
    cout << a.name << "   ";
    cout << a.clas;
    cout << "   ";
    cout << a.dob;
    cout << "   ";

    cout << fixed << setprecision(2) << a.gpa;
}
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
