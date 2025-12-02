class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    int left_product=1;
    int right_product=1;
    int vector_size=nums.size();
    vector<int> result(vector_size);
    int i=0;
    int j=vector_size-1;
    for(i=0;i<vector_size;i++){
        result[i]=left_product;
        left_product*=nums[i];

    }

    for(j=vector_size-1;j>=0;j--){
        result[j]*=right_product;
        right_product*=nums[j];
    }
    
      
    return result;


    }
    
};
