/// week04-5.cpp
/// LeeCode �ǲ߭p�e��7�D 66. Plus One
/// �q�k�����ݡB�˹L�Ӫ��j��
/// 1, 9, 9
///       0 �]�����i��, �ҥH�����٬O+1
///    0    �]�����i��, �ҥH�����٬O+1
/// 2       �S���i��, �������״N���F
/// 1, 2, 3
///       4 �S���i��, �������״N���F
/// 9, 9, 9
///1,0,0, 0 �p�G�@���S���i��B�S����쵪��, �٭n�b�̫e����1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); /// �����D�}�C������, �H�K�u�˹L�Ӫ��j��v
        for(int i=N-1; i>=0; i--){
            if( digits[i] == 9) digits[i] = 0; /// �i��, �ܦ�0
            else{ /// �S���i��, �N�O��쵪�פF
                digits[i]++; /// �N+1��, �S���i��
                return digits; /// ��쵪�פF, �e�X�h
            }
        }
        /// ���S��쵪��, �]�N�O 9,9,9 �@���i��B�S����쵪��, �٭n�b�̫e����1
        digits.insert(digits.begin(), 1); /// �}�l���a��, ���J1
        return digits;
    }
};
