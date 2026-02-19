// Last updated: 2/19/2026, 6:14:55 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length()){
            return -1;
        }
        for(int i=0;i<=haystack.length()-needle.length();i++){
            if(haystack.substr(i,needle.length())==needle){
                return i;
            }
        }
        return -1;
    }
};