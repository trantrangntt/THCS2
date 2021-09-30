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
        sort (a,a+n);
        int c[n];
        int j=0,h=1;
        for (int i=0; i<n; i++){
            if (i<(n/2+n%2)) {
                c[j]=a[i];
                j+=2;
             }
           else {
                c[h]=a[i];
                h+=2;
            }
        }
        for (int j=0; j<n; j++)  cout << c[j] << " ";
        cout << endl;
    }
}