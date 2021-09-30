#include <bits/stdc++.h>
using namespace std;
struct sv
{
    int ma;
    string msv, ten, lop, email, dn;
};
bool dk(sv a, sv b)
{
    if (a.msv > b.msv)
        return false;
    return true;
}
void nhap(sv a[50], int &n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].ma = i + 1;
        scanf("\n");
        cin >> a[i].msv;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop;
        cin >> a[i].email;
        cin >> a[i].dn;
    }
    sort(a, a + n, dk);
}
void n(string m, int &q, sv a[50], int &n)
{

    for (int i = 0; i < q; i++)
    {

        cin >> m;
        for (int j = 0; j < n; j++)
        {
            if (a[j].dn == m)
            {
                cout << a[j].ma << " " << a[j].msv << " " << a[j].ten << " ";
                cout << a[j].lop << " " << a[j].email << " ";
                cout << a[j].dn;
                cout << endl;
            }
        }
    }
}
int main()
{
    struct sv ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    int q;
    cin >> q;
    scanf("\n");
    string m;
    n(m, q, ds, N);
    return 0;
}