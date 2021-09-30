#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ten, gt, ns, dc, thue, hd;
};
void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.thue);
    getline(cin, a.hd);
}
void inds(NhanVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "000";
        if (i < 9)
            cout << "0" << i + 1 << " ";
        else
            cout << i + 1 << " ";
        cout << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].thue << " " << a[i].hd;
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
    inds(ds, N);
    return 0;
}