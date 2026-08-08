# Last updated: 8/8/2026, 8:50:06 AM
1class Solution:
2    def moveZeroes(self, nums: List[int]) -> None:
3        left=0
4        for right in range(len(nums)):
5            if nums[right]!=0:
6                nums[right],nums[left]=nums[left],nums[right]
7                left+=1
8        return nums
9
10        