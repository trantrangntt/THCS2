#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,k;
        cin >> n >> k;
        long long s;
        if(n/k==0)
            s=n*(n+1)/2;
        else {
            int a=n/k;
            int b=n%k;
            s=a*k*(k-1)/2 + b*(b+1)/2;
        }
        cout << s << endl;
    }
    return 0;
}