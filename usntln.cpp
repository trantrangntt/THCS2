#include<bits/stdc++.h>
using namespace std;
long long snt(long long n){
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0) {
            while (n%i==0 && n!=i)
                n/=i; 
            }
      }
    return n;
  }
int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << snt(n);
        cout << endl;
    }
}