#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return i;
	}
	return n;
}

int main()
{
	int t;
	cin >> t;
	int a[t];
	int sum = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < t; i++)
	{
		while (a[i] > 1)
		{
			sum += snt(a[i]);
			a[i] /= snt(a[i]);
		}
	}
	cout << sum;
}
