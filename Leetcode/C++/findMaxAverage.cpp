class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum=0.0;
        double current_sum=0.0;
        int size=nums.size();

        if(size==0){
            return 0;
        }
        else{

        for(int i=0;i<k;i++){
            current_sum=current_sum+nums[i];
            
        }
        max_sum=current_sum;
        
        for (int j=k;j<size;j++){
            current_sum=current_sum+nums[j]-nums[j-k];

            if(current_sum>max_sum){
                max_sum=current_sum;
            }
        }
        }
    return max_sum/k;
    }
};