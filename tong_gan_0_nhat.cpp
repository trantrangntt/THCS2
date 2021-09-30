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
        int min = 0, s = 0;
        int k = abs(a[0] + a[1]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                min = abs(a[i] + a[j]);
                if (min < k)
                {
                    k = min;
                    s = a[i] + a[j];
                }
            }
        }
        cout << s << endl;
    }
}