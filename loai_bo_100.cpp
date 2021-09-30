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
        int h = s.length();
        for (int i = 0; i < h - 2; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
                s.erase(i, 3);
        }
        cout << s.length() << endl;
    }
}