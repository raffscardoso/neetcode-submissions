class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        consecutives = 0 
        temp = 0
        for num in nums:
            if num == 1:
                temp +=1
                consecutives = max(consecutives,temp)
            if num == 0:
                temp = 0
        return consecutives       
