#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
                s.erase(i, 3);
        }
        cout << s << endl;
    }
    return 0;
}