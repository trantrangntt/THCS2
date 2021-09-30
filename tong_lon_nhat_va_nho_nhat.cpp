#include <bits/stdc++.h>
using namespace std;
string check(string h)
{
    int k = h.length();
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        if (h[i] != '0')
        {
            h.erase(0, count);
            return h;
        }
        count++;
    }
    return "0";
}
string max(string a)
{
    int h = a.length();
    for (int i = 0; i < h; i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    return a;
}
string min(string b)
{
    int k = b.length();
    for (int i = 0; i < k; i++)
    {
        if (b[i] == '6')
            b[i] = '5';
    }
    return b;
}
string sum(string a, string b)
{
    int m = a.length();
    int n = b.length();
    int k = max(m, n);
    if (m > n)
        b.insert(0, m - n, '0');
    if (m < n)
        a.insert(0, n - m, '0');
    string c = a;
    long long sum1, sur = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        sum1 = a[i] - '0' + b[i] - '0' + sur;
        sur = sum1 / 10;
        c[i] = (sum1 % 10) + '0';
    }
    if (sur > 0)
        c.insert(0, 1, sur + '0');
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
        string h = sum(min(a), min(b));
        string l = sum(max(a), max(b));
        cout
            << check(h) << " " << check(l);
        cout << endl;
    }
    return 0;
}