#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n<=3) return 1;
    int x=0, y=1;
    int z=1;
    while (z<n){
        z=x+y;
        x=y;
        y=z;
    }
    if (n==z) return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >>a[i];
        }
        for (int i=0; i<n; i++){
            if (fibo(a[i]))  cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}