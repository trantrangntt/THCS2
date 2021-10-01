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
        int a[n][m];
        int d = n, c = m;
        int b = 0, k = 0;
        int o[m * n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        while (k < m * n)
        {
            for (int i = b; i < c; i++)

                o[k++] = a[b][i];
            for (int i = b + 1; i < d; i++)
                o[k++] = a[i][c - 1];
            for (int i = c - 2; i >= b; i--)
                o[k++] = a[d - 1][i];
            for (int i = d - 2; i > b; i--)
                o[k++] = a[i][b];
            b++;
            d--;
            c--;
        }
        for (int i = 0; i < m * n; i++)
        {
            cout << o[i] << " ";
        }
        cout << endl;
    }
}
