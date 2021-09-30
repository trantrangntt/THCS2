#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int h = s.length();
    string a[20];

    for (int i = 0; i < h; i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
            s[i] += 32;
    }
    stringstream ss(s);
    int k = 0;
    while (ss >> a[k])
    {
        a[k][0] -= 32;
        k++;
    }
    for (int i = 0; i < k - 1; i++)
    {
        if (i == k - 2)
            cout << a[i] << ", ";
        else
            cout << a[i] << " ";
    }
    for (int j = 1; j < a[k - 1].length(); j++)
    {
        a[k - 1][j] -= 32;
    }
    cout << a[k - 1];
}
