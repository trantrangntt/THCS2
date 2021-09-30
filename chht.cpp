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
        cin.ignore();
        string s;
        string a[20];
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
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
        if (n == 1)
        {
            cout << a[k - 1] << " ";
            for (int i = 0; i < k - 1; i++)
                cout << a[i] << " ";
        }
        else
        {
            for (int i = 1; i < k; i++)
                cout << a[i] << " ";
            cout << a[0];
        }
        cout << endl;
    }
    return 0;
}