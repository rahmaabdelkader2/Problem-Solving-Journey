class Solution(object):
    def reverse(self, x):

        is_negative=False
        max_size = 2**31 - 1
        min_size = -2**31

        if x < 0:
            is_negative = True
            x = abs(x)
     
        rev = 0
        while x > 0:
            digit = x % 10
            rev = (rev * 10) + digit
            x = x // 10  

        if is_negative:
            rev = -rev

        if rev > max_size or rev < min_size:
            return 0

        return rev