
class Solution {
public:
    int compress(vector<char>& chars) {
       
        //vector<char> letters;
        //vector<string>combined;
        int write_index=0;
        for(int i=0;i<chars.size();i++){
            int count =1;
            while(i+1<chars.size()){
                if(chars[i]==chars[i+1]){
                    count+=1;
                    i++;
                }
                else{
                    break;
                }
             
            }
           
            chars[write_index++]=chars[i];

            if(count>1){
                string c = to_string(count);
                for(char digit :c){

                chars[write_index++]=digit;
                }
            }

            // letters.push_back(chars[i]);
            // array_count.push_back(count);
            
            // combined.push_back(string(1,chars[i]));
            // combined.push_back(to_string(count));
        }
        return write_index;
    }
};
