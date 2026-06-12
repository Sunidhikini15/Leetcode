// Last updated: 6/12/2026, 9:29:34 PM
1class Solution {
2public:
3    int bitwiseComplement(int n) {
4         int m=n;
5         int mask=0;
6         if(n==0){
7            return 1;
8         }
9         while(m!=0){
10            mask=(mask<<1)|1;
11            m=m>>1;
12         }
13         int ans=(~n) & mask;
14         return ans;
15    }
16};