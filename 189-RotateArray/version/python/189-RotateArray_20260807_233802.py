# Last updated: 8/7/2026, 11:38:02 PM
1class Solution:
2    def rotate(self, nums: List[int], k: int) -> None:
3        n=len(nums)
4        k%=n
5        nums.reverse()
6        nums[:k]=reversed(nums[:k])
7        nums[k:]=reversed(nums[k:])
8        