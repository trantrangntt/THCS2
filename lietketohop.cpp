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
        int a[k + 10];
        for (int i = 1; i <= k; i++)
        {
            a[i] = i;
        }
        while (1)
        {
            int vt = -1;
            for (int j = 1; j <= k; j++)
            {
                cout << a[j];
            }
            cout << " ";
            for (int i = k; i > 0; i--)
            {
                if (a[i] < n - k + i)
                {
                    vt = i;
                    break;
                }
            }
            if (vt == -1)
                break;

            a[vt]++;
            for (int j = vt + 1; j <= k; j++)
            {
                a[j] = a[vt] + j - vt;
            }
        }
        cout << endl;
    }
}