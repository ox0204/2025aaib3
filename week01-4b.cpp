/// week01-4b.cpp �ϥ� c�y�� �g
#include <iostream> /// �ϥ� c�y�� �~��
using namespace std; /// �ϥ� c++�y�����R�W�Ŷ�
int main()
{
    int a, b;
    cin >> a >> b; /// c++�y�� Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans += i;
    }
    cout << ans; /// c++�y�� �L���
}
