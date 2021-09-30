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
        int count = 0;
        for (int i = 0; i < h - 1; i++)
        {
            for (int j = i + 1; j < h; j++)
                if (s[i] == s[j])
                    count++;
        }
        cout << count + h << endl;
    }
    return 0;
}