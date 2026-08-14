// Last updated: 8/14/2026, 4:44:11 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        vector<int> result={-1,-1};
5        int left=binarySearch(nums,target,true);
6        int right=binarySearch(nums,target,false);
7        result[0]=left;
8        result[1]=right;
9        return result;
10    }
11    int binarySearch(vector<int>& nums,int target,bool isSearchingLeft){
12        int left=0;
13        int right=nums.size()-1;
14        int idx=-1;
15        while(left<=right){
16            int mid=left+(right-left)/2;
17            if(nums[mid]>target){
18                right=mid-1;
19            }else if(nums[mid]<target){
20                left=mid+1;
21            }else{
22                idx=mid;
23                if(isSearchingLeft){
24                right=mid-1;
25            }else{
26                left=mid+1;
27            }
28            }
29            
30        }
31    
32    return idx;
33    }
34};