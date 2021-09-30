#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        long long k;
        int n;
        long long s;
        cin >> n >> k;
        if (n/k==0) s=n*(n+1)/2;
        else {
            long long a=n/k;
            long long b=n%k;
            s=a*n*(n-1)/2 + b*(b+1)/2;
        }
        if (s==k) cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}