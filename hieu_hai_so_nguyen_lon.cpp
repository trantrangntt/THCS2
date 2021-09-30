#include <bits/stdc++.h>
using namespace std;
string difference(string a, string b)
{
    int m = a.length();
    int n = b.length();
    if (m > n)
        b.insert(0, m - n, '0');
    if (m < n)
        a.insert(0, n - m, '0');
    int k = max(m, n);
    string c = "";
    if (a < b)
        swap(a, b);
    long long remainder = 0, subtract;
    for (int i = k - 1; i >= 0; i--)
    {
        subtract = (a[i] - '0') - (b[i] - '0') - remainder;
        if (subtract < 0)
        {
            remainder = 1;
            subtract += 10;
        }
        else
            remainder = 0;
        c = char(subtract + '0') + c;
    }
    if (c.length() < k)
    {
        c.insert(0, k - c.length(), '0');
    }
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
        cout << difference(a, b);
        cout << endl;
    }
}