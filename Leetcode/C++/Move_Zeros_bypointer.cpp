class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp=0;
        std::vector<int>*ptr=&nums;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((*ptr)[i]==0 ){
                  temp=(*ptr)[i];
                  (*ptr)[i]=(*ptr)[j];
                  (*ptr)[j]=temp;

                }
            }
        }
    }
    
};
