#include <bits/stdc++.h>
using namespace std;
void tach(int n, int m)
{
    int a[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}
//void k trar veef gtri, thuc hien coong viec ma minh k muon dufng trong int main
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h = pow(2, n);
        for (int i = 0; i < h; i++)
        {
            tach(i, n);
            cout << " ";
        }
        cout << endl;
    }
}
