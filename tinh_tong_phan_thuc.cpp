#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    double s=0;
    for (int i=1; i<=t; i++){
        s+= (float)1/i;
    }
    cout << fixed <<setprecision(4) << s;
    return 0;
}