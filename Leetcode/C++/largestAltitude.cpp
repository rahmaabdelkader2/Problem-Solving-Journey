class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int max=0;
        int gain_size=gain.size();
        for(int i=0;i<gain_size;i++){
            current=current+gain[i];

            if(current>max){
                max=current;
            }
        }
        return max;
    }
};