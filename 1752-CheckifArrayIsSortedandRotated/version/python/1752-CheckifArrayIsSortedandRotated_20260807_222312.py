# Last updated: 8/7/2026, 10:23:12 PM
1class Solution:
2    def check(self, nums: List[int]) -> bool:
3        return sum(nums[i-1]>nums[i] for i in range (len(nums)))<2