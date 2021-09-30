#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        int b[10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] > 0)
            {
                b[a[i] % 10]++;
                a[i] /= 10;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (b[i] != 0)
                cout << i << " ";
        }
        cout << endl;
    }
}
// b[i] là số lần xuất hiện
i giá trị;
