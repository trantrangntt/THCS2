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
        char c[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        char b[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        stringstream ss(s);
        string a[20];
        int t = 0;
        int k = 0;
        while (ss >> a[k])
        {
            if (a[0][2] == '1')
            {
                if (k > 0)
                    if (a[k][0] == c[k - 1])
                        t++;
            }
            else
            {
                if (k > 0)
                    if (a[k][0] == b[k - 1])
                        t++;
            }
            k++;
        }
        cout << fixed << setprecision(2) << (float)t * 10 / 15;
        cout << endl;
    }
}