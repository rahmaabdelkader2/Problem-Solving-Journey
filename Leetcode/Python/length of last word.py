class Solution(object):
    def lengthOfLastWord(self, s):
        # manual
        count=0
        for i in range (len(s)-1,-1,-1):
            if s[i]==' ' and count==0 :
                continue
            elif s[i]==' ' and count !=0:
                break
            else:
                count=count+1    

        return count    

        # by functions
        #return len(s.split()[-1])  



        