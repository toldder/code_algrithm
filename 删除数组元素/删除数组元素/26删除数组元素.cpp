//leetcode 26
#include<vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        //暴力
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

        //改进1--只采用双指针,因为这里的元素是有序的，非递增，所以可以使用这种元素
        int length = nums.size();
        int slow = 0,fast=slow+1;
        for (fast = slow + 1; fast < length; fast++) {
            if (nums[slow] != nums[fast]) nums[++slow] = nums[fast];
        }
        return slow+1;//slow是索引
    }
};