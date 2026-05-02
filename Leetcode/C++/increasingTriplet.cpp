class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int smallest=INT_MAX;
    int sec_smallest=INT_MAX;
    int n = nums.size();
    if(n < 3) return false;

        for(int i=0;i<n;i++){
            if(nums[i]<=smallest){
                smallest=nums[i];
            }
            else if(nums[i]<=sec_smallest){
                sec_smallest=nums[i];
            }
            else{
                return true;
            }
        }
      
    
        return false;
    }
};