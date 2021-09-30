#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    string a[20];
    stringstream ss(s);
    int k = 0;
    while (ss >> a[k])
    {
        k++;
    }

    for (int i = 0; i < k - 1; i++)
    {
        cout << a[i][0];
    }
    cout << a[k - 1];
    cout << "@ptit.edu.vn";
    return 0;
}