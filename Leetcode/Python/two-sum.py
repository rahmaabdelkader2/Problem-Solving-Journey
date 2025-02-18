class Solution(object):
    def twoSum(self, nums, target):
        for i in range (len(nums)):
            for k in range (i+1,len(nums)):
                result=nums[i]+nums[k]
                if result==target:
                    return i,k
            
                    

        