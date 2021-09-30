#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long x, y, p;
	while(t--){
		cin >> x >> y >> p;
		long long i = 1;
		for(int j = 0; j < y; j++){
			i = (i * x) % p;
		}
		cout << i << endl;
	}
	return 0;
}