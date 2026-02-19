// Last updated: 2/19/2026, 6:14:20 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            index=index^nums[i];
        }
        return index;
    }
};