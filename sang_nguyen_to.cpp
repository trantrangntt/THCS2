#include <bits/stdc++.h>
using namespace std;
int snt(int i)
{
    if (i == 1)
        return i;
    if (i % 2 == 0)
        return 2;
    else
        for (int j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
                return j;
        }
    return i;
}
void sang(int a, int b)
{
    bool pre[b - a + 2];
    memset(pre, true, sizeof(pre));
    pre[0] = pre[1] = false;
    for (int i = a; i <= b; i++)
    {
        if (pre[i] == true)
        {
            for (int j = i * i; j <= b; j += i)
                pre[i] = false;
        }
    }

    for (int i = a; i <= b; i++)
    {
        if (pre[i])
            cout << i << " ";
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    sang(a, b);
}