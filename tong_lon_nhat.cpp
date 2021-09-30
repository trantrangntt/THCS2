#include <bits/stdc++.h>
using namespace std;
int check(int a[], int b[], int m, int n)
{
    int sum = 0;
    int t = 0;
    for (int i = 0; i < m; i++)
    {
        t += a[i];
        int k = 0;
        for (int j = i + 1; j < n; j++)
        {
            k += b[j];
        }
        if (k + t > sum)
            sum = k + t;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        cin >> m;
        int b[m], a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        int max = check(a, b, n, m);
        int min = check(b, a, m, n);
        if (max < min)
            max = min;
        cout << max << endl;
    }
}