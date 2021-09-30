#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long s=0;
    long gt=1;
    for (int i=1; i<=n; i++){
        gt*=i;
        s+=gt;
    }
    cout << s;
    return 0;
}