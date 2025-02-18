class Solution {
public:
    std::string addBinary(std::string a,std::string b){
    std::string result;
    int32_t sum,carry=0;
    int32_t i = a.size() -1;
    int32_t j = b.size() -1;
    while( i>=0 || j>=0){
        sum=carry;
        if(i>=0)sum+=a[i]-'0';
        if(j>=0)sum+=b[j]-'0';
        result+= std::to_string(sum%2);
        carry=sum/2;
        i--;
        j--;

    }
    if ( carry!=0){result+='1';}
    std::reverse(result.begin(),result.end());
    return result;


}
};