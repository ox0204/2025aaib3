/// week04-4.cpp
/// LeeCode �ǲ߭p�e��10�D 896. Monotonic Array
/// �u���W�[ or �u����� ���}�C, ���i�H�u�S���W�B�S����v
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0; /// �p�G���W�[ up�ܦ�1 �p�G����� down�ܦ�1
        for(int i=1; i<nums.size(); i++){ /// �}�C��q1�}�l
            if( nums[i-1] < nums[i] ) up = 1; /// ���p�B�k�j, �W�[
            if( nums[i-1] > nums[i] ) down = 1; /// ���j�B�k�p, �W�[
        }
        if(up==1 && down==1) return false; /// �̫��ˬd, ���i�H�u�S�W�[�B�S��֡v
        return true;
    }
};
