#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long sum = 0, res = 0;
        int h = a.length();

        for (int i = 0; i < h; i++)
        {
            if (a[i] <= '9' && a[i] >= '0')
            {
                res = res * 10 + a[i] - '0';
            }
            else
            {
                sum += res;
                res = 0;
            }
        }
        sum += res;
        cout << sum;
        cout << endl;
    }
}