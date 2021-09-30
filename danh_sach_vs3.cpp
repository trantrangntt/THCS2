#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    int k = 0;
    string ma = "B20DCCN0";
    string ten, b[100];
    string lop;
    string n;
    float d;
};
void nhap(SinhVien a[50], int &n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop;
        cin >> a[i].n;
        cin >> a[i].d;
        if (i < 9)
        {
            a[i].ma.push_back('0');
            a[i].ma.push_back(i + 1 + 48);
        }
        else
        {
            a[i].ma.push_back((i + 1) / 10 + 48);
            a[i].ma.push_back((i + 1) % 10 + 48);
        }
        if (a[i].n[2] != '/')
            a[i].n.insert(0, "0");
        if (a[i].n[5] != '/')
            a[i].n.insert(3, "0");
        int h = a[i].ten.length();
        for (int j = 0; j < h; j++)
        {
            if (a[i].ten[j] <= 'Z' && a[i].ten[j] >= 'A')
                a[i].ten[j] += 32;
        }
        stringstream ss(a[i].ten);
        while (ss >> a[i].b[a[i].k])
        {
            a[i].b[a[i].k][0] -= 32;
            a[i].k++;
        }
    }
}
bool dk(SinhVien a, SinhVien b)
{
    if (a.d < b.d)
        return false;
    return true;
}
void sapxep(SinhVien a[50], int n)
{
    sort(a, a + n, dk);
}
void in(SinhVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " ";
        for (int j = 0; j < a[i].k; j++)
        {
            cout << a[i].b[j] << " ";
        }
        cout << a[i].lop;
        cout << " ";
        cout << a[i].n << " ";
        cout << fixed << setprecision(2) << a[i].d;
        cout << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
