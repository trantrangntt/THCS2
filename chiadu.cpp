#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
        int a,m;
        cin >> a >> m;
        int ktra=0;
        for (int i=0; i<=m-1; i++){
            if (a*i%m==1) {
                cout << i;
                ktra=1;
                break;
            }
        }
        if (ktra==0) cout << "-1";
        cout << endl;
    }
    return 0;
}