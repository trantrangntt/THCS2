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
        int ktra = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (ktra == 1)
            cout << "1";
        else
            cout << "-1";
        cout << endl;
    }
}