class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            current = nums[i] ? current + 1 : 0;
            res = max(current, res);
        }
        return res;
    }
};