class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) {
            return 0;
        }
        vector<int>nums(n+1);
        nums[0] = 0;
        nums[1] = 1;
        int max = 1;
        for(int i=0; i<n+1; i++) {
            if(i%2==0) {
                nums[i] = nums[i/2];
                if(nums[i]>max) {
                    max = nums[i];
                }
            }
            else {
                nums[i] = nums[i/2] + nums[(i/2)+1];
                if(nums[i]>max) {
                    max = nums[i];
                }
            }
        }
        return max;

        
    }
};