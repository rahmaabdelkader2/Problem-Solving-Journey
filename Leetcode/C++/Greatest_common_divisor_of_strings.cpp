#include <iostream>
#include <string>
using namespace std;
#include <numeric> // Required for std::gcd

// steps 
// 1- get gcd of both strings
// 2- take substring with number of characetrs equals gcd 
// 3- make sure that there is actually a pattern repeated by concating strings with different arrangment



class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int size1 = str1.size();
        int size2 = str2.size();
        string longest_str = (size1 >= size2) ? str1 : str2;
        int result = std::gcd(size1, size2);
        string pattern = longest_str.substr(0, result);
        if((str1+str2)!=(str2+str1)){
            return "";
        }
                  return pattern;

    }
};


