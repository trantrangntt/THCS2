#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[t][t];
    int o[t * t];
    for (int i = 0; i < t * t; i++)
    {
        cin >> o[i];
    }
    sort(o, o + t * t);
    int d = t;
    int k = 0, b = 0;

    while (k < t * t)
    {
        for (int i = b; i < d; i++)
        {
            a[b][i] = o[k++];
        }
        for (int i = b + 1; i < d; i++)
            a[i][d - 1] = o[k++];
        for (int i = d - 2; i >= b; i--)
            a[d - 1][i] = o[k++];
        for (int i = d - 2; i > b; i--)
            a[i][b] = o[k++];
        b++;
        d--;
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}