#include<vector>
class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        //左闭右闭--30ms
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            int tmp = nums.at(middle);
            if (tmp > target) right = middle - 1;
            else if (tmp < target) left = middle + 1;
            else return middle;
        }
        return -1;

        //左闭右闭--34ms
        int left = 0, right = nums.size() ;
        while (left < right) {
            int middle = (left + right) / 2;
            int tmp = nums.at(middle);
            if (tmp > target) right = middle ;
            else if (tmp < target) left = middle + 1;
            else return middle;
        }
        return -1;
    }
};
/*
    给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
    写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
*/