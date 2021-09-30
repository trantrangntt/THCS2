#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ten;
    string lop;
    int n, t, nam;
    char c;
    float d;
};
void nhap(SinhVien a[50], int &n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop;
        cin >> a[i].n >> a[i].c >> a[i].t >> a[i].c >> a[i].nam >> a[i].d;
    }
}
void in(SinhVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "B20DCCN0";
        if (i < 9)
            cout << "0" << i + 1;
        else
            cout << i + 1;
        cout << " ";
        cout << a[i].ten << " " << a[i].lop << " ";
        if (a[i].n < 10)
            cout << "0" << a[i].n << a[i].c;
        else
            cout << a[i].n << "/";
        if (a[i].t < 10)
            cout << "0" << a[i].t << a[i].c;
        else
            cout << a[i].t << "/";
        cout << a[i].nam << " ";
        cout << fixed << setprecision(2) << a[i].d;
        cout << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}