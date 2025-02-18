class Solution(object):
    def removeDuplicates(self, nums):
        index = 0  
        for i in range(len(nums)):
            # b3ml check hal etkarar f el goz2 eli abl el rkm wla laa 34an lw etkarar mali4 d3wa biih we lw laa h7oto odam we azwd el index
            if nums[i] not in nums[:index]:
                nums[index] = nums[i]
                index += 1
        
        length = index  

        return length