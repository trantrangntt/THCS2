#include <bits/stdc++.h>
using namespace std;
struct ds
{
    string name;
    int dd, mm, yyyy;
    char x;
};
void nhap(ds a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].dd >> a[i].x >> a[i].mm >> a[i].x >> a[i].yyyy;
    }
}
bool dk(ds a, ds b)
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
void sx(ds a[], int n)
{
    sort(a, a + n, dk);
}
void in(ds a[], int n)
{
    cout << a[n - 1].name << endl
         << a[0].name;
}
int main()
{
    struct ds a[100];
    int t;
    cin >> t;
    nhap(a, t);
    sx(a, t);
    in(a, t);
}