/// week06-4.cpp �Q�Ѫ� LeeCode ²���D
/// LeeCode 3349. Adjacent Increasing Subarrays Detection I
/// nums �}�C��, �Ʀr���Ƿ|�W�[�C�аݦ��S��2�Ӭ۾F�}�C, �̭����O�W�[?
/// ex. 2,5,7,8,9,2,3,4,3,1
/// conbo 1 2 3 4 5 1 �S������j, �N���|�A�W�[, �έ�Ӫ���1
class Solution {
public:
    int hasIncreasingSubarrays(vector<int>& nums, int k) {
        /// �ϥΪ��C���`���� combo �s��
        int N = nums.size(); /// �}�C�j�p
        vector<int> combo(N, 1); /// ��N��, �̭�����1
        for(int i=1; i<N; i++){
            if( nums[i-1] < nums[i] ) combo[i] = combo[i-1] + 1;
        } /// �ܥX conbo �}�C�̭���������, ���X��, �N��e�@��+1
        /// �n�ˬd�u�۾F2�Ӫ��׬�k���}�C, combo�Ȱ����� k�ӳs��v
        for(int i=0; i<N-k; i++){
            if( combo[i]>=k && combo[i+k]>=k ) return true;
        }
        return false;
    }
};
