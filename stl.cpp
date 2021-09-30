#include <bits/stdc++.h>
using namespace std;
//#include<algoithm> thư viện của các hàm dòng 1;
//#include<iostream> thư viện của C++ không bao các hàm;
//#include<vector> khai báo vector

int main()
{
    // 1. max(a,y),min(x,y), sort(a,a+n), swap (a,y);
    int a[n];              // khai báo mảng tĩnh;
    int *a = new int a[n]; // khai              báo mảng dộng; trong C++ k dùng nhiều
    // c++ dùng nhiều vector;
    // vector <...> a; // khai báo a là vector 3 chấm là định dạng dữ liệu
    // vd :
    vector<int> a;
    vector<string> b; // vân vân
    // vector có thể thêm phần tử hoặc bớt phần tử (là mảng động)
    a.push_back(giá trị đưa vào) // đưa phần tử vào mảng động a;
                                 // ban đầu  a={} là mảng rỗng không
        a.push_back(1);
    // lúc này mảng a ={1};
    a.push_back(2);
    // lúc này mảng a={1,2};
    // dần dần nhét vawfo đăng sau mảng
    a.pop_back(); // xóa bỏ phần tử cuối cùng của mảng
    // lúc này a={1};
    cout << a[0]; // in ra phần tử đầu tiên;
    a.size;       // trả về sô lượng phần tử trong mảng
    for (int i = 0; i < 10; i++)
        a.push_back(i); // đưa giá trị i vào măng a{0,1,2,3,4,5,6,7,8,9}
    a.size = 10;        // trả về dố lượng phần tử trong mẳng
    a.clear();          // xóa tất cả các phần tử trong mảng; --> đưa số phần tử trong mảng về 0;
    a.insert();         // chèn;
    a.front();          // trả về phần tử đầu tiên; (in ra phần đầu trong mảng)
    a.back();           // trả về giá trị cuối cùng ;(in ra phần tử cuối);
    a[0];
    a.back()-- > a.at(a.end())-- a[a.size() - 1];
    a.resize(10, 4);
    vd a = {1, 1, 1};
    for (int &i : a)
    { // for truy cập  từng phần tử của vòng lặp thay vì dùng for (int i=0; i<a.size; i++)
        cout << i;
    }
    // tương đương
    for (int element : a)
        // truyền tham chiếu,
        for (int &element : a)
            // truyền gia strij vào ví trí, duyệt nhưng thay đổi giá trị; cả đọc cả viết ;
    nếu hai lệnh for trên một cái có dấu và và không có dấu và, nếu thêm lệnh element ++ ví dụ mảng a={1,2,3} đối với không có và thì in ra 1,2,3 còn có và thì in ra 2,3,4;
    // duyệt tất cả các phần tử trong mảng
    // với các kiểu dữ liệu chưa xác định được trong mảng ta có thể dùng auto;
    // for (auto element:a)  << cout << element ;
    // auto nhầm tự xác định kiểu dữ liệu ;
    ví dụ auto b = a;                  // ta đang có kiểu dữ liệu của a là vector thì khi ta gán b bằng leejng auto thì tự động xác định b là kiểu dữ liệu vector;
    kiểu for (const int &element : a); // giúp không thay dổi nhưng const không thay đổi mảng a duyệt không thay đổi giá trị element; chỉ đọc chứ không thay đổi ;

    cout << endl;
    a.resize(10, 5);
    for (int &i : a)
        cout << i;
    // mảng ban đầu có ba phần tử là a={1,1,1} sau dó a.resize(10, 5) gồm tất cả 10 phần tử rồi thêm vào 7 phẩn tử có giá trị là 5 ;
    // sau đó mảng được in ra 1115555555 ( tổng 10 phần tử gồm 3 phần tử 1 ban đầu và 7 phần tử 5);
    a.assign(10, 5) // thì reset lại mảng trả về mảng gồm 10 phần tử có giá trí 5;
                    // in ra 5555555555;
        set<int>
            ans;
    ans.insert(3);
    for (set<char>::iterator it = ans.begin(); it != án.end(), it++)
        cout << *it;
    return 0;
}
bài tập vận dụng;
sắp xếp chèn 4 5 7 3 2 out put
    Buoc 0 : 5 Buoc 1 : 5 7 Buoc 2 : 3 5 7 Buoc 3 : 2 3 5 7 int
    main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }

    return 0;
}
cho một xau loại bỏ các từ nguyên âm trong xau xau đó in ra xâu theo thứ tự từ điển int main()
{
    string s;
    cin >> s;
    vector<int> ans;
    for ()
    {
        if (khac nguyên am)
            ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end()) // sắp xếp mảng a theo thứ tự // sắp xếp từ đầu đến cuối mảng; khác với mảng tĩnh là sort (a,a+n)
        for (char &i : ans)      // duyệt lần lượt từng vị trí i từ đầu đến cuối của măng ans
        cout
        << i;
}
//
