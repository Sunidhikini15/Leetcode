# Last updated: 8/7/2026, 10:45:02 PM
1class Solution:
2    def removeDuplicates(self, nums: List[int]) -> int:
3        i=1
4        for j in range(1,len(nums)):
5            if nums[j]!=nums[i-1]:
6                nums[i]=nums[j]
7                i+=1
8        return i