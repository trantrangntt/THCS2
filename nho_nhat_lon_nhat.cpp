#include <bits/stdc++.h>
using namespace std;
vector<int> be, lon;
void smallest(int m, int s)
{
    int i, n = m;
    if (s > 9 * m || (s == 0 && m > 1))
        be.push_back(-1);
    else
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j == 0 && s != 0)
                i = 1;
            else
                i = 0;
            while ((s - i) > 9 * (m - 1))
            {
                i++;
            }
            be.push_back(i);
            m--;
            s -= i;
        }
        be.push_back(s);
    }
}
void largest(int m, int s)
{
    int i, n = m;
    if (s > 9 * m || (s == 0 && m > 1))
        lon.push_back(-1);
    else
        for (int j = 0; j < n; j++)
        {
            i = 9;
            while (s - i < 0)
            {
                i--;
            }
            lon.push_back(i);
            m--;
            s -= i;
        }
}
int main()
{
    int m, s;
    cin >> m >> s;
    smallest(m, s);
    largest(m, s);
    for (int i = 0; i < be.size(); i++)
        cout << be[i];
    cout << " ";
    for (int i = 0; i < lon.size(); i++)
        cout << lon[i];
}