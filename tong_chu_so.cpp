#include<bits/stdc++.h>
using namespace std;
int tong(int n){
    int s=0;
    while (n>0){
        int m=n%10;
        s+=m;
        n/=10;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        while (tong(n)>9){
            n=tong(n);
        }
        cout << tong(n);
        cout << endl;
    }
    return 0;
}