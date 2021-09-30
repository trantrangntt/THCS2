#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string a[100];
        stringstream ss(s);
        int k = 0;
        while (ss >> a[k])
        {
            k++;
        }
        for (int i = k - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}