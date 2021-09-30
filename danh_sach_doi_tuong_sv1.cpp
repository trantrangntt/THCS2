#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma = "B20DCCN";
    string ten, lop, ns;
    float d;
};
void nhap(SinhVien &a)
{
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ns;
    cin >> a.d;
}
void in(SinhVien a)
{
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}