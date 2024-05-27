#include<vector>
class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int left = 0,right=left;
        int len = nums.size();
        int sublen = len,minSubLen=sublen;
        int sum = 0;
        bool flag=false;
        while (right < len) {
             sum += nums[right];
             while (sum >= target) {
                 flag = true;
                 sublen = right - left + 1;
                 minSubLen = minSubLen < sublen ? minSubLen : sublen;
                 sum -= nums[left++];
             }
            right++;
        }
        if (flag) return minSubLen;
        return 0;
    }
};