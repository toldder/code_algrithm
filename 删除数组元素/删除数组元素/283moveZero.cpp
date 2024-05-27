#include<vector>
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int left = 0,right=left;
        int len = nums.size();
        while (right < len) {
            if (nums[right] != 0) nums[left++] = nums[right];
            right++;
        }
        //leftָ������һ��Ӧ�ñ���ֵ��Ԫ��
        while (left < len) {
            nums[left++] = 0;
        }
    }
};