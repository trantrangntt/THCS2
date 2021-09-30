#include<bits/stdc++.h>
using namespace std;
int snt(long long n){
    if(n<2) return 0;
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long count=0;
        long long n;
        cin >> n;
        for (int i=2; i<=sqrt(n); i++){
            if(snt(i)) count++;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}