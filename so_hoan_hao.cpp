#include <bits/stdc++.h>
using namespace std;
long long mu(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long x = mu(a, b / 2);
    if (b % 2 == 1)
        return (x * x * a);
    return (x * x);
}
int sn(long long n)
{
    if (n > mu(10, 12))
        return 0;
    long long tong = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            tong += i;
        if (n % (n / i) == 0 && i != n / i)
            tong += n / i;
    }
    if (tong == n)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << sn(n) << endl;
    }
}