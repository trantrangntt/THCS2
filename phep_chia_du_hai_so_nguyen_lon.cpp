#include <bits/stdc++.h>
using namespace std;
long long POW(long long x, long long y, long long p)
{
    if (y == 0)
        return 1 % p;
    if (y == 1)
        return x % p;
    if (y % 2 == 0)
        return POW(x * x % p, y / 2, p) % p;
    else
        return x * POW(x * x % p, y / 2, p) % p;
}
int main() 3
{
    int t;
    cin >> t;
    long long b, m;
    while (t--)
    {
        string a;
        cin >> a;
        int h = a.length();
        cin >> b >> m;
        long long temp = 0;
        for (int j = 0; j < h; j++)
        {
            temp = (temp * 10 + a[j] - '0') % m;
        }
        long long k = POW(temp, b, m);
        cout << k;
        cout << endl;
    }
    return 0;
}
