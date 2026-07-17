// Last updated: 7/17/2026, 12:11:58 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4
5        sort(nums.begin(), nums.end());
6
7        int n = nums.size();
8        int closest = nums[0] + nums[1] + nums[2];
9
10        for (int i = 0; i < n - 2; i++) {
11
12            int left = i + 1;
13            int right = n - 1;
14
15            while (left < right) {
16
17                int sum = nums[i] + nums[left] + nums[right];
18
19                if (abs(sum - target) < abs(closest - target))
20                    closest = sum;
21
22                if (sum == target)
23                    return sum;
24                else if (sum < target)
25                    left++;
26                else
27                    right--;
28            }
29        }
30
31        return closest;
32    }
33};