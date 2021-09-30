#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int h=s.length();
        int ktra=1;
        for (int i=0; i<=h/2; i++){
            if(s[i]!=s[h-i-1]  || (s[i]-'0')%2!=0 ||(s[h-1-i]-'0')%2!=0  ){
                ktra=0;
                break;
            }
        }
        if (ktra==1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;