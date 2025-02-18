class Solution(object):
    def subtractProductAndSum(self, n):
        digits = []
        while n > 0:
            digits.append(n % 10)
            n = n // 10

        multiply = 1
        summation = 0
        for digit in digits:
            multiply *= digit
            summation += digit

        return multiply - summation
