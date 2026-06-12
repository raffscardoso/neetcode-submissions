class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int current = 0;
        for(int num: nums){
            if(num == 1){
                current++;
                res = max(res,current);
            }
            if(num == 0) current = 0;
        }
        return res;
    }
};