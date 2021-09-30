#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long x=0, y=1;
        long long z=0;
        while (z<n){
            z=x+y;
            x=y;
            y=z;
        }
        if (z==n) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}