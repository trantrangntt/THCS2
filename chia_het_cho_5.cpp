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
        int t = 0;
        for (int i = 0; i < h; i++)
        {
            t = t * 2 % 5 + (s[i] - '0') % 5;
        }
        if (t % 5 == 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}