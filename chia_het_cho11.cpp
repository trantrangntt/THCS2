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
        int c = 0;
        int k = 0;
        for (int i = 0; i < h; i++)
        {
            if (i % 2 == 0)
                t = (t + s[i] - '0') % 11;
            else
                c = (c + s[i] - '0') % 11;
        }
        k = (t % 11 - (c % 11) + 11) % 11;
        if (k % 11 == 0)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}