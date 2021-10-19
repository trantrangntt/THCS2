#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int b[100005] = {0};
        int ktra = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[a[i] - x] == 1)
            {
                ktra = 1;
                break;
            }
        }
        if (ktra == 1)
            cout << "1";
        else
            cout << "-1";
        cout << endl;
    }
}