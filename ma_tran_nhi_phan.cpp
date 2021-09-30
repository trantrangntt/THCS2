#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a;
            if (a == 1)
                count++;
        }
        if (count > 3 - count)
            c++;
    }
    cout << c;
}