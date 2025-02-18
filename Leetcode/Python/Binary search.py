class Solution(object):
    def search(self, nums, target):
        max_index = len(nums) - 1
        min_index = 0

        while min_index <= max_index:
            middle = (max_index + min_index) // 2
            if nums[middle] == target:
                return middle
            elif target < nums[middle]:
                max_index = middle - 1
            else:
                min_index = middle + 1

        return -1
