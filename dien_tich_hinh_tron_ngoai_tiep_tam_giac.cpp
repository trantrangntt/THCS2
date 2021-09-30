#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238;
typedef double db;
struct triangle
{
    db xa, ya, xb, yb, xc, yc;
    db s, r, m, n, p;
};
void nhap(triangle &a)
{

    cin >> a.xa >> a.ya >> a.xb >> a.yb >> a.xc >> a.yc;
    a.m = sqrt((a.xb - a.xa) * (a.xb - a.xa) + (a.yb - a.ya) * (a.yb - a.ya));
    a.n = sqrt((a.xc - a.xa) * (a.xc - a.xa) + (a.yc - a.ya) * (a.yc - a.ya));
    a.p = sqrt((a.xb - a.xc) * (a.xb - a.xc) + (a.yb - a.yc) * (a.yb - a.yc));
}
void in(triangle a)
{
    if (a.m + a.n > a.p && a.n + a.p > a.m && a.p + a.m > a.n)
    {
        a.s = (db)sqrt((a.m + a.n + a.p) * (a.m + a.n - a.p) * (a.m + a.p - a.n) * (a.n + a.p - a.m)) / 4;
        a.r = (db)(a.m * a.n * a.p) / (4 * a.s);
        cout << fixed << setprecision(3) << a.r * a.r * PI;
    }
    else
        cout << "INVALID";
}
int main()
{
    struct triangle ab[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap(ab[i]);
        in(ab[i]);
        cout << endl;
    }
    return 0;
}