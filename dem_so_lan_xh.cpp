#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,b;
        cin >> n >> b;
        int a[n];
        int count=0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            if (a[i]==b) count++;
        }
        if (count!=0) cout << count;
        else cout << "-1";
        cout << endl;
    }
}