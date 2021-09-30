#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int m,n;
        cin >> m >> n;
        int j=0;
        int a[m], b[n], c[m+n];
        for (int i=0; i<m; i++){
            cin >> a[i];
            c[j]=a[i];
            j++;
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
            c[j]=b[i];
            j++;
        }
        sort(c,c+m+n);
        for (int j=0; j<m+n; j++){
            cout << c[j] << " ";
        }
        cout << endl;
    }
    return 0;
}