#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b)
{
    int m = a.length();
    int n = b.length();

    if (m < n)
        a.insert(0, n - m, '0');
    if (m > n)
        b.insert(0, m - n, '0');
    string c = a;
    long sum1, sur = 0;
    int k = max(m, n);
    for (int i = k - 1; i >= 0; i--)
    {
        sum1 = a[i] - 48 + b[i] - 48 + sur;
        sur = sum1 / 10;
        c[i] = char(sum1 % 10 + 48);
    }
    if (sur > 0)
        c.insert(0, 1, sur + 48);
    return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        cout << sum(a, b);
        cout << endl;
    }
    return 0;
}