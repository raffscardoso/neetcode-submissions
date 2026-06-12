class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                current++;
                res = max(res,current);
            }
            if(nums[i] == 0) current = 0;
        }
        return res;
    }
};