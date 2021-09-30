#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin, a);
        int ktra = 1;
        for (int i = 0; i < a.length() - 1; i++)
        {
            if ((a[i] - '0') - (a[i + 1] - '0') != 1 && (a[i] - '0') - (a[i + 1] - '0') != -1)
            {
                ktra = 0;
                break;
            }
        }
        if (ktra == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}