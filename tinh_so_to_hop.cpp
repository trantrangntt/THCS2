#include <bits/stdc++.h>
using namespace std;
int giaiThua(int n)
{
    long long p = pow(10, 9) + 7;
    if (n == 1)
        return 1;
    return n % p * giaiThua(n - 1) % p;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        long long p = pow(10, 9) + 7;
        cin >> n >> r;
        long long k = giaiThua(n) % p;
        long long h = giaiThua(n - r) % p * giaiThua(r) % p;
        cout << (k % p / h % p) % p;
        cout << endl;
    }
}