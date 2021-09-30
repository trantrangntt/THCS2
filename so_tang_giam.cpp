#include <bits/stdc++.h>
using namespace std;
int snt(long long n)
{
    if ((n % 10) % 2 == 0)
        return 0;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
long long mu(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long x = mu(a, b / 2);
    if (b % 2 == 1)
        return (x * x * a);
    return (x * x);
}
long long sg(long long n)
{
    if (snt(n) == 0)
        return 0;
    int m;
    while (n > 9)
    {
        m = n % 10;
        n /= 10;
        if (m >= n % 10)
            return 0;
    }
    return 1;
}
long long st(long long n)
{

    if (snt(n) == 0)
        return 0;
    int m;
    while (n > 0)
    {
        m = n % 10;
        n /= 10;
        if (m <= n % 10)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k = mu(10, n - 1);
        long long h = mu(10, n);
        int count = 0;
        for (long long i = k; i < h; i++)
        {
            if (sg(i) || st(i))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}