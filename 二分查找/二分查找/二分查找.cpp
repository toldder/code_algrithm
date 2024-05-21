#include<vector>
class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        //×ó±ÕÓÒ±Õ--30ms
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            int tmp = nums.at(middle);
            if (tmp > target) right = middle - 1;
            else if (tmp < target) left = middle + 1;
            else return middle;
        }
        return -1;

        //×ó±ÕÓÒ±Õ--34ms
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