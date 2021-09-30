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
        int ktra = 0, h, min = n;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j] && j < min)
                {
                    min = j;
                    ktra = 1;
                    break;
                }
            }
        }
        if (ktra == 1)
            cout << a[min];
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}