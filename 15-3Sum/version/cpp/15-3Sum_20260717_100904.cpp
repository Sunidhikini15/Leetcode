// Last updated: 7/17/2026, 10:09:04 AM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans;
5        sort(nums.begin(), nums.end());
6
7        int n = nums.size();
8
9        for (int i = 0; i < n - 2; i++) {
10
11            // Skip duplicate first elements
12            if (i > 0 && nums[i] == nums[i - 1])
13                continue;
14
15            int left = i + 1;
16            int right = n - 1;
17
18            while (left < right) {
19
20                int sum = nums[i] + nums[left] + nums[right];
21
22                if (sum == 0) {
23
24                    ans.push_back({nums[i], nums[left], nums[right]});
25
26                    // Skip duplicate left values
27                    while (left < right && nums[left] == nums[left + 1])
28                        left++;
29
30                    // Skip duplicate right values
31                    while (left < right && nums[right] == nums[right - 1])
32                        right--;
33
34                    left++;
35                    right--;
36                }
37                else if (sum < 0) {
38                    left++;
39                }
40                else {
41                    right--;
42                }
43            }
44        }
45
46        return ans;
47    }
48};