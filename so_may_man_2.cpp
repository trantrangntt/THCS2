#include <bits/stdc++.h>
using namespace std;
int snt(string s)
{
    int h = s.length();
    long long sum = 0;
    for (int i = 0; i < h; i++)
    {
        sum = sum + (s[i] - '0');
    }
    if (sum % 9 == 0 && sum != 0)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (snt(s))
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}