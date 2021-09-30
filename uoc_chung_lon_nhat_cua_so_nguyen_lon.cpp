#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int h = s.length();
        long long m = 0;
        for (int i = 0; i < h; i++)
        {
            m = (m * 10 + s[i] - '0') % n;
        }
        cout << __gcd(m, n);
        cout << endl;
    }
}