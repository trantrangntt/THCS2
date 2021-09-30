#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        long long m,n ;
        cin >> m >> n;
        int a[m],b[n];
        for (int i=0; i<m; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
        }
        sort (a,a+m);
        sort (b,b+n);
        cout << (long long) a[m-1]*b[0] << endl;
    }
        
    return 0;
}