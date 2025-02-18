class Solution(object):
    def containsDuplicate(self, nums):
        num_set = set()

        for num in nums:
            if num in num_set:
                return True
            num_set.add(num)

        return False


# true but exceeds time limis        

# class Solution(object):
#     def containsDuplicate(self, nums):
  
#         flag = False
#         count = 0 
        
#         for i in range(len(nums)):
#             for j in range(i+1, len(nums)):
#                 if nums[i] == nums[j]:  
#                     count += 1
        
#         if count != 0:
#             flag = True

#         return flag

