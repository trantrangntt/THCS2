#include <bits/stdc++.h>
using namespace std;
int tach(int n)
{
    int dem = 0;
    int m;
    while (n > 0)
    {
        m = n % 10;
        if (m % 2 == 0)
            dem++;
        else
            dem--;
        n /= 10;
    }
    if (dem == 0)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int h = pow(10, n - 1);
    int k = pow(10, n);
    int count = 0;
    for (int i = h; i <= k; i++)
    {
        if (tach(i))
        {
            count++;
            if (count < 10)
                cout << i << " ";
            if (count == 10)
            {
                cout << i << endl;
                count = 0;
            }
        }
    }
    return 0;
}