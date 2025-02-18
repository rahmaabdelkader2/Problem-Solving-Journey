class Solution(object):
    @staticmethod
    def searchInsert(nums, target):
        answer=0
        for i in range (0,len(nums)):
            if nums[i]==target:
                answer=i 
            elif nums[i] < target:
                if i == len(nums) - 1 or nums[i + 1] > target:
                    answer = i + 1
                    nums.insert(answer, target)
                    print(nums)
            
        return answer        
        