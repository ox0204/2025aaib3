/// week07-1b.cpp �G�X�@
/// TAICA NYCU ��߶�����q�j�ǹq���t �����Ҳ�6�D
/// Input: 1-9 ���Ʀr Output: ¶��骺���
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@5�h��
/// Intput 2 ��3�h��, Intput 3 ��5�h��, Intput 4 ��7�h��, Intput 5 ��9�h��
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; /// Step 1: Input

    for(int i=1; i<2*n; i++){ /// Step 03: for�j��, �Ӽh
        for(int j=1; j<2*n; j++){ /// �ĴX��
            if(j>1) cout << " "; /// Step 05: �����Y+���[ +���[ +���[ +���[
            cout << n; /// ���æL�Ʀrn(�N�|�)
        }
        cout << "�{�b�O��i��, i:" << i; /// Step 04: �Ӽh�N�[(�N�|�)
        cout << endl; /// Step 2: Output, ����
    }
}
