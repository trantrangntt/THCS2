#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string ten;
    string ns;
    float a, b, c, d;
};
void nhap(ThiSinh &A)
{
    getline(cin, A.ten);
    cin >> A.ns;
    cin >> A.a >> A.b >> A.c;
}
void in(ThiSinh A)
{
    A.d = A.a + A.b + A.c;
    cout << A.ten << " " << A.ns << " ";
    cout << fixed << setprecision(1) << A.d;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}