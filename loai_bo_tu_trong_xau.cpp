#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,m,token;
    getline(cin,s);
    getline(cin,m);
    stringstream ss(s);
    string a[100];
    int k=0;
    while(ss>>a[k]){
      //  a[k]=token;
        k++;
    }
    for(int i=0; i<k; i++){
        if (a[i]!= m) cout << a[i] << " ";
    }
    return 0;
}