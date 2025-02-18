class Solution(object):
    @staticmethod
    def singleNumber(nums):
        result = 0
        for num in nums:
            result ^= num
        return result

