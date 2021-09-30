#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int k,n;
        cin >> k >> n;
        int c[k*n];
        int i=0;
        for (int j=0; j<k; j++){
            int count=0;
             while ( count < n ){
                 cin >> c[i];
                 count ++;
                 i++;
            }
        }
        sort (c, c + k*n);
        for (int i=0; i<k*n; i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
}
// bài này cồng cềnh nhập ( nhưng có thể nhập mảng c từ 0 đến k*n)