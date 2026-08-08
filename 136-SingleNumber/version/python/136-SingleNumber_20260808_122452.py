# Last updated: 8/8/2026, 12:24:52 PM
1class Solution:
2    def singleNumber(self, nums: List[int]) -> int:
3        res=0
4        for n in nums:
5            res^=n
6        return res