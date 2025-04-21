class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        int size1=nums1.size();
        int size2=nums2.size();
        vector<int> common_i;
        vector<int> common_j;
        vector<vector<int>> vectorOfVectors;
        for (int i =0;i<size1;i++){
            for(int j=0;j<size2;j++){
                if(nums1[i]==nums2[j]){
                    common_i.push_back(nums1[i]);
                    common_j.push_back(nums2[j]);
                    
                }
                
            }

        }
        // std::erase =>  takes the vector and remove the value needed from that vector ( takes values not position)
        for (int k:common_i){
             
            std::erase(nums1, k);
        }

         for (int k:common_j){
            std::erase(nums2, k);
            
        }
      
      // vector.erase =>from start to end
      //  unique => rearrange the vector's elements and the duplicates places at the end and return pointer where the unique vales ends. but works only for consecutive ones so to work wiht this must sort first 
      // earse chop everything after this point 


        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
   
             
        vectorOfVectors.push_back(nums1);
        vectorOfVectors.push_back(nums2);
        return vectorOfVectors;



    }
};
