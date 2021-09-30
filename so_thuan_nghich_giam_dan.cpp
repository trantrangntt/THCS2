#include <bits/stdc++.h>
using namespace std;
struct ds
{
    string ten;
    int dem = 1;
};
bool kt(ds a, ds b)
{
    if (a.dem > b.dem)
        return false;
    return true;
}
int stn(string a)
{
    int h = a.length();
    if (h == 1)
        return 0;
    for (int i = 0; i < h / 2; i++)
    {
        if (a[i] != a[h - i - 1] || a[i] > a[i + 1])
            return 0;
    }
    if (h % 2 == 0)
    {
        if (a[h / 2] != a[(h - 1) / 2])
            return 0;
    }
    else
    {
        if (a[h / 2] < a[(h - 2) / 2])
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    struct ds a[1000];
    struct ds m[1000];
    int k = 0, c = 0;
    while (ss >> a[k].ten)
    {
        if (stn(a[k].ten))
        {
            m[c].ten = a[k].ten;
            c++;
        }
        k++;
    }
    for (int i = 0; i < c; i++)
    {
        cout << m[i].ten << " ";
    }
}