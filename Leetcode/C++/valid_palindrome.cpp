class Solution {
public:
    std::string remove_non_alphanumeric(std::string s){
    std::string result;
    for (char c : s){
        // std::isalnum check letter or digit
        if (std::isalnum(c)) {
                // Convert to lowercase and add to result
                result += std::tolower(c);
            }
        }
    return result;

}

bool isPalindrome(std::string s) {
        bool ispal=false;
        s=remove_non_alphanumeric(s);
    
        if (s.empty()) ispal=true;
       
        int i=0;
        int j=s.length()-1;

        while (i<=j){
            if (s[i]==s[j]){
                ispal=true;
            }
            else{
                 ispal=false; 
                 break;
            }
                            
            i++;j--;
        }
        return ispal;
    }
};