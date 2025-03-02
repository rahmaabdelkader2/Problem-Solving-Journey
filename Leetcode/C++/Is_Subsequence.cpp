class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag=false;
        int size_1=s.length();
        int size_2=t.length();
        int j=0;
        if(size_1 ==0 && size_2!=0  || size_1==0 && size_2==0){
            flag=true;
        }
        else{
        for(int i=0;i<size_1;i++){
            flag=false;
            for(;j<size_2;j++){
                if(s[i]==t[j]){
                    flag=true;
                    j++; 
                    //  34an atafada eni  check nfs el character f el loop eli b3dh a 34an a7rs 3ala point eni a keep 7war el trteeb y3ni lw el case eni adwr 3ala abc m4 b3d m ala2i el b magii4 a check 3ala c f el string el tani f mkan abl eli l2et fih el b

                    // we a keep track of position by keeping it global
                    break;
                }
                else{
                    flag=false;
                }
            }
            if (flag==false){
                break;
             }
            
        }

        }

    return flag;
    }

};
