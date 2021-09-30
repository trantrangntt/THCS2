#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long p = pow(10, 9) + 7;
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int h = n - 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            long long m = pow(x, h);
            sum = (sum % p) + (a[i] % p * m % p) % p;
            h--;
        }
        cout << sum % p << endl;
    }
    return 0;
}
