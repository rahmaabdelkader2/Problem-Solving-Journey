
bool isVowel(char c) {
    // Array of vowels (both lowercase and uppercase)
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    // iterate character by character inside the vowels 
    for (char v : vowels) {
        if (c == v) {
            return true;
        }
    }
    return false;
}

class Solution {
public:
    std::string reverseVowels(std::string s) {
        
int size = s.size();
char* ptr=&s[0];
char* ptr1=&s[size-1];
char vowel,vowel1;

while(ptr<ptr1){
    
    while(ptr<ptr1 && !isVowel(*ptr)){
        ptr++;
    }
    
    while(ptr<ptr1 && !isVowel(*ptr1)){
        ptr1--;
    }
    if(ptr<ptr1){
        std::swap(*ptr,*ptr1);
        ptr++;
        ptr1--;
    }

}

return s;
}
};
