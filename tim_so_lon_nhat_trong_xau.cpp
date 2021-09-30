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
        cin >> s;
        int h = s.length();
        long long res = 0, max = 0;
        for (int i = 0; i < h; i++)
        {
            if (isdigit(s[i]))
                res = res * 10 + s[i] - '0';
            else
            {
                if (res > max)
                {
                    max = res;
                }
                res = 0;
            }
        }
        if (res > max)
            max = res;
        cout << max << endl;
    }
}