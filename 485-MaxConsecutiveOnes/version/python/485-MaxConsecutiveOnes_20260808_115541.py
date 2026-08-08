# Last updated: 8/8/2026, 11:55:41 AM
1class Solution:
2    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
3        count =0
4        ans=0
5        for num in nums:
6            if num==1:
7                count+=1
8            else:
9                count=0
10            ans=max(ans,count)
11        return ans