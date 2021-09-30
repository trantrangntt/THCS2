#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 10];
        for (int i = 0; i <= n; i++)
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
                    swap(a[j], a[i - 1]);
                    sort(a + i, a + n + 1);
                    break;
                }
            }
        }
        cout << endl;
    }
}