class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums.size();j++){
                if((nums[i]+nums[j]==target) && (flag==false) && (i!=j)){
                    res.push_back(i);
                    res.push_back(j);
                    flag=true;
                    break;

                }
            }
        }

        return res;
    }
};