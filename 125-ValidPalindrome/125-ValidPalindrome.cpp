// Last updated: 2/19/2026, 6:14:22 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(char c:s){
            if(isalnum(c)){
                filtered+=tolower(c);
            }
        }
        int left=0;
        int right=filtered.size()-1;
        while(left<right){
            if(filtered[left]!=filtered[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};