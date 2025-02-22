#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool right_side;
        bool left_side;
        bool flag=false;
     
     if(n==0){
        flag= true;
     }
     else{

     
       for (int i = 0; i < flowerbed.size(); i++) {
           left_side=flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0);
           right_side=(i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
           if (left_side && right_side ) {
                flowerbed[i] = 1;
                n--;
                i++;
        } 
       
        if(n==0){
            flag= true;
            break;
        }
       }}
       
        return flag;
        
    }
    

};


