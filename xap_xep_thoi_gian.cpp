#include <bits/stdc++.h>
using namespace std;
struct ds
{
    int gio, phut, giay;
};
void nhap(ds a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
}
bool dk(ds a, ds b)
{
    if (a.gio > b.gio)
        return false;

    if (a.gio == b.gio)
        if (a.phut > b.phut)
            return false;
        else if (a.phut == b.phut && a.giay > b.giay)
            return false;
    return true;
}
void sx(ds a[], int n)
{
    sort(a, a + n, dk);
}
void in(ds a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
    }
}
int main()
{
    struct ds a[5000];
    int t;
    cin >> t;
    nhap(a, t);
    sx(a, t);
    in(a, t);
    return 0;
}