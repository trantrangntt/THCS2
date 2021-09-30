#include<bits/stdc++.h>
using namespace std;
long long uc( long long m, long long n){
    long long r;
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
long long bc( long long m, long long n){
    return m*n/uc(m,n);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        long long h,i;
        h=uc(a,b);
        i=bc(a,b);
        cout << i << " " << h ;
        cout << endl ;
    }
    return 0;
}
