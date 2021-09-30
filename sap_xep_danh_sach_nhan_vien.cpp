#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ma;
    string name, sex, address, day;
    long long tax;
    char x;
    int mm, dd, yyyy;
    string m, n;
};

void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    scanf("\n");
    cin >> a.sex;
    scanf("\n");
    cin >> a.mm >> a.x >> a.dd >> a.x >> a.yyyy;
    scanf("\n");
    getline(cin, a.address);
    scanf("\n");
    cin >> a.tax;
    scanf("\n");
    cin >> a.day;
    a.m = to_string(a.mm);
    a.n = to_string(a.dd);
    if (a.m.length() < 2)
        a.m.insert(0, 1, '0');
    if (a.n.length() < 2)
        a.n.insert(0, 1, '0');
}
bool dk(NhanVien a, NhanVien b)
{
    if (a.yyyy > b.yyyy)
        return false;

    if (a.yyyy == b.yyyy)
        if (a.mm > b.mm)
            return false;
        else if (a.mm == b.mm && a.dd > b.dd)
            return false;
    return true;
}
void sapxep(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].ma = to_string(i + 1);
        while (a[i].ma.length() < 5)
        {
            a[i].ma = "0" + a[i].ma;
        }
    }
    sort(a, a + n, dk);
}
void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << a[i].ma << " ";
        cout << a[i].name << " " << a[i].sex << " " << a[i].m << "/" << a[i].n << "/" << a[i].yyyy << " " << a[i].address
             << " " << a[i].tax << " " << a[i].day;
        cout << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}