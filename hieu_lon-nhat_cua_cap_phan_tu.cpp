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
        int max = a[0] - a[1];
        int sum = 0;
        int ktra = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    ktra = 1;
                    sum = a[j] - a[i];
                    if (sum > max)
                        max = sum;
                }
                else
                    continue;
            }
        }
        if (ktra == 1)
            cout << max;
        else
            cout << "-1";
        cout << endl;
    }
}