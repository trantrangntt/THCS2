#include <bits/stdc++.h>
using namespace std;
long long bc(long long n, long long m)
{
    long long r;
    long long a = m, b = n;
    if (m < n)
        swap(m, n);
    while (n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return a * b / m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k;
        cin >> k;
        long long h = 1;
        for (long long i = 1; i <= k; i++)
        {
            h = bc(h, i);
        }
        cout << h << endl;
    }
    return 0;
}