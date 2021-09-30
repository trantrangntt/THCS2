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
        int k;
        cin >> k;
        int len = s.length();
        set<char> arr;
        for (int i = 0; i < len; i++)
            arr.insert(s[i]);
        int temp = len - arr.size();
        if (26 - arr.size() <= k && temp >= 26 - arr.size())
            cout << "1"
                 << "\n";
        else
            cout << "0"
                 << "\n";
    }

    return 0;
}