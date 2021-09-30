#include <bits/stdc++.h>
using namespace std;
long long tong(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
long long pt(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return i;
    return n;
}
long long smith(long long n)
{
    long long sum1 = 0;
    while (n > 1)
    {
        if (pt(n) > 9)
            sum1 += tong(pt(n));

        else
            sum1 += pt(n);
        n /= pt(n);
    }
    return sum1;
}

int main()
{
    long long n;
    cin >> n;

    if (smith(n) == tong(n))
        cout << "1";
    else
        cout << "0";
}
