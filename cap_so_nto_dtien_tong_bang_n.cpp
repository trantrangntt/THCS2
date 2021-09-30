#include<bits/stdc++.h>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int h,ktra=0;
        for (int i=2; i<=n/2; i++){
            if (snt(i) && snt(n-i)) {
                h=i;
                ktra=1; 
                break;
            }
        }
        if (ktra==1) cout << h << " " <<  n-h;
        if (ktra==0) cout << "-1";
        cout << endl;
    }
}