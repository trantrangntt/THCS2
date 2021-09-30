#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort (a,a+n);
        int min=a[0];
        int ktra=0,h;
        for (int i=1; i<n; i++){
            if (a[i]> min) {
                h=a[i];
                ktra=1;
                break;
            }
        }
        if (ktra==1) cout << min << " " << h;
        else cout << "-1";
        cout << endl;
    }
}