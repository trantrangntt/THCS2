#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    string x = a.append(b);
    string y = b.append(a);
    if (x > y)
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
    }
}