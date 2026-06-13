// Last updated: 6/13/2026, 10:43:53 AM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        for(int i=0;i<=30;i++){
5            int ans=pow(2,i);
6            if(ans == n){
7                return true;
8            }
9        }
10        return false;
11    }
12    
13};