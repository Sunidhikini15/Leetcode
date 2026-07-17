// Last updated: 7/17/2026, 9:07:03 PM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7
8        int n = nums.size();
9
10        for (int i = 0; i < n - 3; i++) {
11
12            // Skip duplicate values for i
13            if (i > 0 && nums[i] == nums[i - 1])
14                continue;
15
16            for (int j = i + 1; j < n - 2; j++) {
17
18                // Skip duplicate values for j
19                if (j > i + 1 && nums[j] == nums[j - 1])
20                    continue;
21
22                int left = j + 1;
23                int right = n - 1;
24
25                while (left < right) {
26
27                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
28
29                    if (sum == target) {
30
31                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
32
33                        // Skip duplicate values for left
34                        while (left < right && nums[left] == nums[left + 1])
35                            left++;
36
37                        // Skip duplicate values for right
38                        while (left < right && nums[right] == nums[right - 1])
39                            right--;
40
41                        left++;
42                        right--;
43                    }
44                    else if (sum < target) {
45                        left++;
46                    }
47                    else {
48                        right--;
49                    }
50                }
51            }
52        }
53
54        return ans;
55    }
56};