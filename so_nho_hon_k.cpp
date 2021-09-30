
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ct = 0, d = 0;
        for (int i = 0; i < n; i++)
            if (a[i] <= k)
                ct++;
        for (int i = 0; i < ct; i++)
            if (a[i] > k)
                d++;
        int ans = d;
        for (int i = 0, j = ct; j < n; j++, i++)
        {
            if (a[i] > k)
                d--;
            if (a[j] > k)
                d++;
            ans = min(ans, d);
        }
        cout << ans << endl;
    }
}