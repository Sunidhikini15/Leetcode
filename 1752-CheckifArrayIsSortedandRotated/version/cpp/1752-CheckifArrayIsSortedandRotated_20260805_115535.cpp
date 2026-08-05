// Last updated: 8/5/2026, 11:55:35 AM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4       int count=0;
5       int n=nums.size();
6       for(int i=0;i<n;i++){
7        if(nums[i]>nums[(i+1)%n] )
8           count++;
9       }
10       return count<=1;
11    }
12};