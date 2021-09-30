#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
	long long t, m, k;
};
void nhap(PhanSo &a)
{
	cin >> a.t >> a.m;
}
PhanSo tong(PhanSo &a, PhanSo &b)
{
	PhanSo p;
	p.t = a.t * b.m + b.t * a.m;
	p.m = a.m * b.m;
	p.k = __gcd(p.t, p.m);
	p.t = (p.t) / p.k;
	p.m = (p.m) / p.k;
	return p;
}
void in(PhanSo &a)
{
	cout << a.t << "/" << a.m;
}

int main()
{
	struct PhanSo p, q;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p, q);
	in(t);
	return 0;
}