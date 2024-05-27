#include<vector>
class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        
        std::vector<int> result = nums;
        int re = result.size() - 1;
        int i = 0, j = re;
        for (; re >= 0; --re) {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                result[re] = nums[i] * nums[i];
                i++;
            }
            else {
                result[re] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
    }
};