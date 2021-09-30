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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int ktra = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    ktra = 0;
                    break;
                }
            }
            if (ktra == 1)
            {
                int ktr2 = 0;
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] == a[j])
                    {
                        count++;
                        ktr2 = 1;
                    }
                }
                if (ktr2 == 1)
                    count++;
            }
        }
        cout << count << endl;
    }
}