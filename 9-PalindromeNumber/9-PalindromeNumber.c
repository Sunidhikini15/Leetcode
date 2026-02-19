// Last updated: 2/19/2026, 6:15:05 PM
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    long reverse=0;
    int xcopy=x;
    while(x>0){
        reverse=(reverse*10)+(x%10);
        x/=10;
    }
    return reverse==xcopy;
};