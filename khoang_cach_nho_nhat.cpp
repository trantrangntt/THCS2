#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int min=a[1]-a[0], c;
        for (int i=1; i<n; i++){
           c= a[i]-a[i-1];
           if (c< min) min=c;
        }
        cout << min << endl;
    }
    return 0;
}