#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_string;
        int max=0;

        if(word1.length()>=word2.length()){
            max=word1.length();
        }
        else{
            max=word2.length();
        }
        
        for(int i=0;i<=max;i++){
           if(i<word1.length()){
            merged_string+=word1[i];
           }
           if(i<word2.length()){
            merged_string+=word2[i];
           }
        }
        
        return merged_string;
    }
};
