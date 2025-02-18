class Solution {
public:
    int addDigits(int num){
        int sum;
        if (num==0){
            return 0;
        }
        while(num>0) {
            sum+=num%10;
            num=num/10;
            if (sum>=10 && num==0){
                num=sum;
                sum=0;
            }
        }
        return sum;
        }
};