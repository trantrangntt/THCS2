#include <bits/stdc++.h>
using namespace std;
struct sx
{
    int ma;
    string ten, nhom;
    float mua, ban, lai;
};
void nhap(sx a[50], int &n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].ten);
        scanf("\n");
        getline(cin, a[i].nhom);
        scanf("\n");
        cin >> a[i].mua;
        scanf("\n");
        cin >> a[i].ban;
        a[i].ma = i + 1;
        a[i].lai = a[i].ban - a[i].mua;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i].lai < a[j].lai)
                swap(a[i], a[j]);
        }
    }
}
void in(sx a[50], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " ";
        cout << fixed << setprecision(2) << a[i].lai;
        cout << endl;
    }
}
int main()
{
    int n;
    struct sx a[50];
    cin >> n;
    nhap(a, n);
    in(a, n);
}