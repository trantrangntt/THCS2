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
        for (int i = 0; i < s.length(); i++)
        {
            int ktra = 0;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    ktra = 1;
                    s.erase(j, 1);
                    j--;
                }
            }
            if (ktra == 1)
            {
                s.erase(i, 1);
                i--;
            }
        }
        cout << s << endl;
    }
}