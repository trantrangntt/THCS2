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
        for (int i=0; i<n; i++){
            if (i==0)  cout << a[i]*a[i+1] << " ";
            if (i==n-1) cout << a[i]*a[i-1] << " ";
            if (i!=0 && i!=n-1) cout << a[i-1]*a[i+1]<< " ";
        }
        cout << endl;
    }
    return 0;
}