// Last updated: 2/19/2026, 6:14:15 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0){
            columnNumber--;
            res=char((columnNumber%26)+'A')+res;
            columnNumber/=26;
        }
        return res;
    }
};