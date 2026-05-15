class Solution {
public:
// o(n^2)
    // int majorityElement(vector<int>& nums) {
    //     int maj=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         int freq=0;
    //         for(int j=0;j<n;j++)
    //         if(nums[i]==nums[j]){
    //             freq++;
    //         }
            
    //     if(freq>n/2){
    //             maj=nums[i];
    //         }
    //     }
        
    //     return maj;
    // }
    // o(n logn n)
     int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};