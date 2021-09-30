#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int count=0;
        int ktra=0;
        for (int i=2; i<=n; i++){
                while(n%i==0 ){
                    count++;
                    n/=i;
                    if(count==k) {
                        cout << i;
                        ktra=1;
                        break;
                }
            }
            if (ktra==1) break;
        }
        if (ktra==0) cout << "-1";
        cout << endl;
    }
    return 0;
}