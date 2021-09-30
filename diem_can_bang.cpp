#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, kt = 0;
        cin >> n;
        int a[n], left[n], t = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            t = t + a[i];
            left[i] = t - a[i];
        }
        for (int i = 0; i < n; i++)
            if (left[i] == t - a[i] - left[i])
            {
                kt = 1;
                cout << i + 1 << endl;
                break;
            }
        if (kt == 0)
            cout << "-1\n";
    }
}