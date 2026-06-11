// Last updated: 6/11/2026, 4:30:08 PM
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count=0;
5        while(n!=0){
6            //checking last bit
7            if(n&1){
8                count++;
9            }
10            n=n>>1;
11        }
12        return count;
13    }
14};