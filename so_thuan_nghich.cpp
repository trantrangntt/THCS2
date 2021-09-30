#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int n=s.length();
        int ktra=1;
        for (int i=0; i<n; i++){
            if (s[i]!=s[n-i-1]) {
                ktra=0;
                break;
            }
        }
        if (ktra==1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}