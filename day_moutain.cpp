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
        int l, r;
        cin >> l >> r;
        int ktra = 1;
        for (int i = l; i < r; i++)
        {
            for (int j = l; j < i; j++)
            {
                if (a[i] < a[j])
                {
                    for (int k = i + 1; k <= r; k++)
                    {
                        if (a[i] < a[k])
                        {
                            ktra = 0;
                            break;
                        }
                    }
                }
                if (ktra == 0)
                    break;
            }
            if (ktra == 0)
                break;
        }
        if (ktra == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}