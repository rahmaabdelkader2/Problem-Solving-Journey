class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        result=0
        list=[]
        for i in (digits):
            result=result*10+i
        result=result+1
        for i in str(result):
            list.append(int(i))
        return list    
