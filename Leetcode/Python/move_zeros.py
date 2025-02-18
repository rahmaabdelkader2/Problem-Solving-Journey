class Solution(object):
    def moveZeroes(self, nums):
        count=0
        val=0
        for i in range (0,len(nums)):
            if nums[i] ==0:
                count=count+1
            if  val in nums:
                nums.remove(val)
        for i in range (0,len(nums)):
            if  val in nums:
                nums.remove(val)
        for i in range (0,count):
            nums.append(0)
            
        return nums
                    
        