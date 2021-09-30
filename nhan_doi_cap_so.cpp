#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a[x + 1];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        a[x] = 0;
        for (int i = 0; i < x; i++)
        {
            if (a[i] == 0)
                continue;
            if (a[i] == a[i + 1])
            {
                a[i + 1] = 0;
                a[i] *= 2;
                dem++;
            }
            else
            {
                dem++;
            }
            cout << a[i] << " ";
        }
        for (int i = 0; i < x - dem; i++)
        {
            cout << "0"
                 << " ";
        }
        cout << endl;
    }
}