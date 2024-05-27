//leetcode 26
#include<vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        //����
        //int length = nums.size();
        //for (int pos = 0; pos < length; pos++) {
        //    int nowNum = nums[pos];
        //    int slowPoint = pos;
        //    for (int fastPoint = pos; fastPoint < length; fastPoint++) {
        //        if (nowNum != nums[fastPoint]) {
        //            nums[slowPoint++] = nums[fastPoint];
        //        }
        //    }
        //    length = slowPoint;
        //}
        //return length;

        //�Ľ�1--ֻ����˫ָ��,��Ϊ�����Ԫ��������ģ��ǵ��������Կ���ʹ������Ԫ��
        int length = nums.size();
        int slow = 0,fast=slow+1;
        for (fast = slow + 1; fast < length; fast++) {
            if (nums[slow] != nums[fast]) nums[++slow] = nums[fast];
        }
        return slow+1;//slow������
    }
};