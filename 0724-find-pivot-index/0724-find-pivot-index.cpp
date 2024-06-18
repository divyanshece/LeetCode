class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int lsum = 0;
            int rsum = 0;
            for(int j=i-1;j>=0;j--) {
                lsum = lsum + nums[j];
            }
            for(int k=i+1;k<n;k++) {
                rsum = rsum + nums[k];
            }
            if(lsum==rsum) {
                return i;
            }

        }
        return -1;
    }
};