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
    int n;
    cin >> n;
    int a[100000];
    int i = 0;
    while (n > 1)
    {
        a[i] = snt(n);
        n /= snt(n);
        i++;
    }
    int vt = 0;
    for (int j = 0; j < i; j++)
    {
        if (a[j] != a[j + 1])
        {
            cout << a[j] << " " << j - vt + 1 << endl;
            vt = j + 1;
        }
    }
    return 0;
}