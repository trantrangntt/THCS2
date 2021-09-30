#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,k;
        cin >> a >> k;
        int m[a];
        for (int i=0; i<a; i++){
            cin >> m[i];
        }
        for (int i=0; i<a; i++){
            for (int j=i+1; j<a; j++){
                if (m[i]>m[j])
                   swap(m[i],m[j]);
            }
        }
        for (int i=0; i<a; i++){
            if (i==k-1) cout << m[i];
        }
        cout << endl;
    }
    return 0;
}