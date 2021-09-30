#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,x;
        int ktra=0;
        cin >> n >>x;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            if (x==a[i]){
                ktra=1;
                break;
            }
        }
        if (ktra==1) cout << "1";
        if (ktra==0) cout <<"-1";
        cout << endl;
    }
    return 0;
}