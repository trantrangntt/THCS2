#include <bits/stdc++.h>
using namespace std;
long long mu(int a, int b)
{
    if (b == 0)
        return 1;
    long long x = mu(a, b / 2);
    if (b % 2 == 1)
        return (x * x * a);
    return (x * x);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long k;
        k = (x * y) / __gcd(x, y);
        k = (k * z) / __gcd(k, z);
        long long m = mu(10, n - 1);
        long long l = mu(10, n);
        if (l > k)
            if (m % k == 0)
                cout
                    << m;
            else
                cout << ((m / k) + 1) * k;
        else
            cout << "-1";
        cout << endl;
    }
}