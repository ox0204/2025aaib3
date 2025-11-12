/// week01-4b.cpp 使用 c語言 寫
#include <iostream> /// 使用 c語言 外掛
using namespace std; /// 使用 c++語言的命名空間
int main()
{
    int a, b;
    cin >> a >> b; /// c++語言 讀資料
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans += i;
    }
    cout << ans; /// c++語言 印資料
}
