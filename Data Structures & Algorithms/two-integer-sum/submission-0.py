class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}

        for i, n in enumerate(nums):
            remain = target - n
            if remain in hash:
                return [hash[remain], i]
            hash[n] = i
