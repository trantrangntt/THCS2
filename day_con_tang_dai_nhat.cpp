#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 1;
        int max = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                dem++;
            }
            else if (a[i] == a[i + 1])
                dem = dem;
            else
            {
                dem = 1;
                continue;
            }
            if (dem > max)
                max = dem;
        }
        cout << max << endl;
    }
}