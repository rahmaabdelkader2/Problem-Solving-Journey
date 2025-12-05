class Solution {
public:
    string reverseWords(string s) {
        int start_index=0;
        int stop_index=0;
        vector<string> sub_string;
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ') {
                if (i > start_index) { 
                    string word = s.substr(start_index, i - start_index);
                    sub_string.insert(sub_string.begin(), word + " ");
                }
                start_index = i + 1;
            }
        }
        
        string last = s.substr(start_index);
        if(!last.empty()){        
        sub_string.insert(sub_string.begin(),last+" ");
        }

        string combined = std::accumulate(sub_string.begin(), sub_string.end(), std::string(""));

        if (!combined.empty() && combined.back() == ' '){
            combined.pop_back();
        }
            return combined;
        
    }
};
