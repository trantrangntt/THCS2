#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t ;
    cin.ignore();
    while(t--){
        char c;
        cin >> c;
        if( c>= 'A' && c<='Z') c+=32;
         else  c-=32;
         cout << c << endl;
    }
    return 0;
}