#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while (t--){
        int a,b;
        int n, q;
        cin >> n >> q;
        int c[n];
        for (int i=0; i<n; i++){
            cin >> c[i];
        }
        while(q--){
            cin >> a >>b; 
            int s=0;
            for (int i=a-1; i<=b-1; i++ ){
                 s+=c[i];
            }
            cout << s;
            cout << endl;
        }
         cout << endl;
    }
}