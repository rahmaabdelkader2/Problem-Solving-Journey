class Solution(object):
    def removeElement(self, nums, val):
        for i in range (0,len(nums)):
            if val in nums :
                nums.remove(val)
            
        
        return len(nums)  