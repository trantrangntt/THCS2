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
        int a[100] = {0};
        int h = s.length();
        int ktra = 1;
        if (s[0] == '0')
        {
            ktra = 0;
        }
        for (int i = 0; i < h; i++)
        {
            if (s[0] == '0')
            {
                ktra = 0;
                break;
            }
            if (s[i] < '0')
            {
                ktra = 0;
                break;
            }
            else if (s[i] > '9')
            {
                ktra = 0;
                break;
            }
            if ((s[i] >= '0' && s[i] <= '9'))
                a[s[i] - '0']++;
        }
        if (ktra != 0)
        {
            for (int i = 0; i < 10; i++)
            {
                if (a[i] == 0)
                {
                    ktra = 2;
                    break;
                }
            }
        }
        if (ktra == 0)
            cout << "INVALID";
        if (ktra == 1)
            cout << "YES";
        if (ktra == 2)
            cout << "NO";
        cout << endl;
    }
}