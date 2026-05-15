class Solution {
public:
    string convertToTitle(int columnNumber) {

        string result="";
        while(columnNumber>0){
            columnNumber--;
            int num=columnNumber%26;
            char res=num+'A';
            result=res+result;
            columnNumber=columnNumber/26;
        }
        return result;
    }
};