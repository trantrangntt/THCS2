#include<bits/stdc++.h>
using namespace std;
int snt(int n){
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++)
        if(n%i==0) return 0;
    return 1;
}
int uc(int m, int n){
    int r;
    while(n>0){
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        int count=0;
        for (int i=1; i<=x; i++){
            if(uc(i,x)==1) count++;
        }
        if(snt(count)) cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}