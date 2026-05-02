class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    int arr_size=arr.size();
    int target_number=0;
    int number_occ=1;
    bool unique_occ=true;
    vector<int> occ;
    bool already_counted=false;
     for(int i=0;i<arr_size;i++){
        target_number=arr[i];
        already_counted=false;

            for(int k = 0; k < i; k++) {
                if(arr[k] == target_number) {
                    already_counted = true;
                    break;
    }
}
    if(already_counted) continue;

        for(int j=i+1;j<arr_size;j++){
            if(arr[j]==target_number){
                number_occ++;
            }
        }
        occ.push_back(number_occ);
        number_occ=1;


     } 


    sort(occ.begin(),occ.end());
    for(int i=0;i<(occ.size()-1);i++){
        if (occ[i]==occ[i+1]){
            unique_occ=false;
        }

    }
    return unique_occ;
    }
};