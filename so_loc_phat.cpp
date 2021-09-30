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
        int ktra = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0' && s[i] != '8' && s[i] != '6')
            {
                ktra = 0;
                break;
            }
        }
        if (ktra == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
