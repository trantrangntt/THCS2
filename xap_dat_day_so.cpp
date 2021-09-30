#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >> n;
        long long a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            int ktra=0;
            for(int j=0; j<n; j++){
                if (i==a[j]) {
                    cout <<  a[j] << " ";
                    ktra=1;
                    break;
                }
            }
            if (ktra==0) cout << "-1" << " ";
        }
        cout << endl;
    }
    return 0;
}