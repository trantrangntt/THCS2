#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                cout << "1"
                     << " ";
            if (i % 2 == 0)
                cout << "2"
                     << " ";
            if (snt(i) && i != 2)
                cout << i << " ";
            if (i % 2 != 0 && snt(i) == 0)
            {
                for (int j = 3; j <= sqrt(i); j++)
                    if (i % j == 0)
                    {
                        cout << j << " ";
                        break;
                    }
            }
        }
        cout << endl;
    }
    return 0;
}