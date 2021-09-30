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
        string s;
        cin.ignore();
        getline(cin, s);
        string a[20];
        stringstream ss(s);
        int k = 0;
        while (ss >> a[k])
        {
            k++;
        }
        if (n == 1)
        {
            cout << a[k - 1] << " ";
            for (int i = 0; i < k - 1; i++)
                cout << a[k];
        }
        else
        {
            for (int i = 1; i < k; i++)
                cout << a[k] << " ";
            cout << a[0];
        }
        cout << endl;
    }
    return 0;
}