class Solution {
public:

 int factors[3]={2,3,5};
    bool isUgly(int n) {
        bool flag=false;
        if(n<=0){
            flag=false;
          
        }
    
        else{
                for(int i:factors){
                    while(n%i==0){
                        n=n/i;
                    }
                }
                }
                
                if (n==1){
                    flag=true;
            
                }
             return flag;
        }
       
    
};