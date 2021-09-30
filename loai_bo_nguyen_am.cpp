#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int h = s.length();
    for (int i = 0; i < h; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] != 'a' && s[i] != 'u' && s[i] != 'o' && s[i] != 'e' && s[i] != 'i' && s[i] != 'y')
            cout << "." << s[i];
    }
}