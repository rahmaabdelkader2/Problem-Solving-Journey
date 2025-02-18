class Solution(object):
    def fib(self, n):
        if n == 0 or n==1:
           return n

        first=0
        second=1
        current =0
        for n in range (1,n):
            current=first+second
            first=second
            second=current

        return current    

           