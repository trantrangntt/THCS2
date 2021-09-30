#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k = pow(10, 9) + 7;
        long long x = 1, y = 1;
        long long z = x % k + y % k;
        int h = n - 2;
        while (h-- && n > 2)
        {
            z = x % k + y % k;
            x = y;
            y = z;
        }
        if (n > 2)
            cout << z % k;
        if (n <= 2)
            cout << "1";
        cout << endl;
    }
    return 0;
}