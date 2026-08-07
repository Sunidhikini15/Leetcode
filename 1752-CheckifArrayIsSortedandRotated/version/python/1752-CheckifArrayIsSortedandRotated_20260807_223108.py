# Last updated: 8/7/2026, 10:31:08 PM
1class Solution:
2    def check(self, nums: List[int]) -> bool:
3        count=0
4        for i in range(len(nums)):
5            if(nums[i-1]>nums[i]):
6                count+=1
7
8        if count<2:
9            return True
10        else:
11            return False
12            