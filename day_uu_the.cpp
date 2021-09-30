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
        stringstream ss(s);
        string a[1000];
        int dem = 0, k = 0;
        while (ss >> a[k])
        {
            int h = a[k].length();
            if ((a[k][h - 1] - '0') % 2 == 0)
                dem++;
            else

                dem--;
            k++;
        }
        if ((k % 2 == 0 && dem > 0) || (k % 2 != 0 && dem < 0))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}