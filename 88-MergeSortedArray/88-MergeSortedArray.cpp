// Last updated: 2/19/2026, 6:14:43 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx=m-1;
        int nidx=n-1;
        int right=m+n-1;
        while(nidx>=0){
            if(midx>=0&&nums1[midx]>nums2[nidx]){
                nums1[right]=nums1[midx];
                midx--;
            }else{
                nums1[right]=nums2[nidx];
                nidx--;
            }
            right--;
        }
    }
};