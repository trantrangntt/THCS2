#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long i = 0; i < n; i++)
			cin >> a[i];
			long long h = n;
		for(long long i = 0; i < n; i++){
			if(a[i] != 0){
				cout << a[i] << " ";
				h--;
			}
		}	
		for(long long i = 0; i < h; i++)
		 cout << "0" <<" ";
		 cout << endl;
	}
}
