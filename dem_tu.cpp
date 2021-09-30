#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;   
        string token;
        getline(cin,s);
        stringstream ss(s);
        int count=0;
        while( ss >> token){
            count++;
        }
    cout << count << endl;
    }
}