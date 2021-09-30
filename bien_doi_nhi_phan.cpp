#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a;
        int b[n] = {0};
        int c[m] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a;
                if (a == 1)
                {
                    b[i]++;
                    c[j]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[i] != 0 || c[j] != 0)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
    return 0;
}