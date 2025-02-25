#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size= candies.size();
        vector<bool>result_list;
        bool flag;
        int result=0;
        int max = *std::max_element(candies.begin(), candies.end());
        // using astric to acces as it's return an interator not the actual value
        for(int i=0;i<size;i++){
            result=candies[i]+ extraCandies;
            if(result>=max){
                flag=true;
            }
            else{
                flag=false;
            }

             result_list.push_back(flag);
        }
        return result_list;
    }
};
