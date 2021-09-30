#include<bits/stdc++.h>
using namespace std;
int snt(int n){
    if(n<2) return 1;
    for(int i=2; i<=sqrt(n); i++) 
        if(n%i==0) return 0;
        return 1;
}
int tong(int n){
    int m;
    int s=0;
    while(n>0){
        m=n%10;
        s+=m;
        n/=10;
    }
    return s;
}
int tu(int n){
    int s=0;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            s+=tong(i);
            n/=i;
        }
    }
    return s;
}
int main(){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        if (snt(n)==0 && tong(n)==tu(n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}