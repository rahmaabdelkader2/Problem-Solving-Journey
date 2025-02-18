class Solution(object):
    def isPalindrome(self, x):
        temp=x
        rev=0
        while(x>0):
            digit=x%10
            rev=(rev*10)+digit
            x=x/10

        if(temp==rev):
            return True
        else:
            return False




in case of string :
 return s == s[::-1]