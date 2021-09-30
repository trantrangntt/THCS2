#include<bits/stdc++.h>
using namespace std;
long snt( long n){
    if (n<2) return n; 
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0) return i; 
    }                                 
    return n; 
}
int main(){
    int t;     
    cin >> t;                           
        long n; 
        cin >> n;
        while(n>1){                     
            cout << snt(n) << " ";    
            n/=snt(n);                         
        }
        cout << endl;
    }    
}       