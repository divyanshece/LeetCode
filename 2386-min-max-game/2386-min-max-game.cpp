class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()>=1) {
            if(nums.size()==1) {
                return nums[0];
            }
            int n = nums.size();
            vector<int>newNums(n/2);
            for(int i=0; i<newNums.size(); i++) {
                if(i%2==0) {
                    newNums[i] = min(nums[2 * i], nums[(2 * i) + 1]);
                }
                else if (i%2 !=0) {
                    newNums[i] = max(nums[2 * i], nums[(2 * i) + 1]);
                } 
            }
            nums = newNums;

        }
        return nums[0];
        
        
    }
};