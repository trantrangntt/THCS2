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
        int k = 0;
        for (int i = 0; i < h - 1; i++)
        {
            for (int j = i + 1; j < h; j++)
            {
                if (s[i] > s[j])
                    swap(s[i], s[j]);
            }
        }
        for (int i = 0; i < h; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                cout << s[i];
            else
                k += s[i] - '0';
        }
        cout << k;
        cout << endl;
    }
}