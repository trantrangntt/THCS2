#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n-1; i++){
            cin >> a[i];
        }
        sort (a,a+n);
        if(a[n-2]<1 || a[0]>1) cout << "1";
        else {
            for (int i=0; i<n-1; i++){
                if (a[i]<=0 && a[i+1] > 1 ){
                    cout << "1";
                    break;
                } 
                if (a[i]>0 && a[i]!=a[i+1] && a[i+1] != a[i]+1){
                    cout << a[i]+1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}