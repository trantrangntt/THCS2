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
        {
            cin >> a[i];
        }
        long long max = a[0];
        long long gt = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                gt = 1;
                continue;
            }
            gt = gt * (a[i]);
            if (gt > max)
                max = gt;
                }
        cout << max;
        cout << endl;
    }
}