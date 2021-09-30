#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; 
    while (n--){
    int t;
    cin >> t;
    int m;
    m=t%100;
    if (m!=86) cout << "0";
    else cout << "1";
    cout << endl;
    }
    return 0;
}