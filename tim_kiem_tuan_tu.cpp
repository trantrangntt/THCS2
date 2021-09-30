#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        int ktra=0;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            if (a[i]==k) {
                cout << i+1;
                ktra=1; 
                break;
            }
        }
        if (ktra==0) cout << "-1";
        cout << endl;
    }
    return 0;
}