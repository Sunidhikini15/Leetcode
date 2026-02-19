// Last updated: 2/19/2026, 6:14:07 PM
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            ans=ans<<1;
            if(n&1){
                ans=ans|1;
            }
            n=n>>1;
        }
        return ans;
    }
};