#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
    double h=sqrt((c-a)*(c-a)+(d-b)*(d-b));
        cout << fixed << setprecision(4)<< h << endl;
    }
    return 0;
}