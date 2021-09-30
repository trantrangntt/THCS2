#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long k;
        cin >> k;
        int h = s.length();
        long long temp = 0;
        for (int i = 0; i < h; i++)
        {
            temp = temp * 10 + s[i] - '0';
            if (temp > k)
                temp = temp % k;
        }
        cout << temp;
        cout << endl;
    }
}