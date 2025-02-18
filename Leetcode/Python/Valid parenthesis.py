class Solution(object):

    def isValid(self, s):
        flag=True
        stack = []
        bracket_map = {')': '(', '}': '{', ']': '['}

        for char in s:
            if char in '({[':
                stack.append(char)
            elif char in ')}]':
                if len(stack) == 0 or  stack[-1] != bracket_map[char]:
                    return False
                stack.pop()    
                  

        return len(stack)==0


