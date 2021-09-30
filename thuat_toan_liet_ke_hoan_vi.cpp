#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    while (1)
    {
        int i;
        for (int j = 1; j <= n; j++)
        {
            cout << a[j];
        }
        cout << " ";
        for (i = n; i >= 1; i--)
        {
            if (a[i] > a[i - 1])
            {
                break;
            }
        }
        if (i == 1)
            break;
        for (int j = n; j >= i; j--)
        {
            if (a[j] > a[i - 1])
            {
                swap(a[i + 1], a[j]);
                sort(a + i, a + n + 1);
                break;
            }
        }
    }
}