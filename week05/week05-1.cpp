/// week05-1.cpp
/// LeeCode �ǲ߭p�e Built-In Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r�� string ��iostream �� cin�ӥ�
        string word; /// �r��
        /// ss >> word; /// ���O cin >> word �@��, �{�b�� ss �i�H�� ss >> word
        /// ss >> word; /// Ū��2��, �|Ū���2�Ӧr
        while (ss >> word ) { /// �@��Ū, Ū�줣��Ū����
            /// �̭�����Ƴ��S����
        }
        cout << word; /// �����@�ӹ���, ��Ū���

        return word.length(); /// �̫�, ����װe�X�h
    }
};
