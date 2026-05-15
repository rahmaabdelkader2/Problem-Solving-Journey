class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int len1 = s.size();
        int len2 = t.size();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

    int i=0;
        while(i<len1){
            if(s[i]!=t[i]){
                return t[i];

            }
            i++;
        
        }

        return t.back(); // return last one by default if we didn't return t[i]
    }
};