#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return i;
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[1000];
        int k = 0;

        while (n > 1)
        {
            b[k] = snt(n);
            n /= snt(n);
            k++;
        }
        if (k != 3)
        {
            cout << "0";
        }
        else
        {
            if (b[0] != b[1] && b[1] != b[2])
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }
}