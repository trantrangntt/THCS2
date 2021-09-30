#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[500] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int max = 0, max2 = 0;
    for (int i = 1; i <= m; i++)
    {

        if (b[i] > max)
            max = b[i];
    }
    int k;
    for (int i = 1; i <= m; i++)
    {

        if (b[i] != max)
            if (b[i] > max2)
            {
                max2 = b[i];
                k = i;
            }
    }
    if (max2 != 0)
        cout << k;
    if (max2 == 0)
        cout << "NONE";
}