class Solution(object):
    def lengthOfLongestSubstring(self, s):
        start=0
        maxlen=0
        hash_table={}

        for i,c in enumerate (s):
            if c in hash_table and start <= hash_table[c]:
                start=hash_table[c]+1
            else:
                maxlen=max(maxlen,i-start+1)
            hash_table[c]=i
    
        return maxlen