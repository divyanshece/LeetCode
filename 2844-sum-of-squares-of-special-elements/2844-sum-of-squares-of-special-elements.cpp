class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int sum = 0;
        for (i;i<=n;i++) {
            if (n%(i+1)==0) {
                sum = sum + nums[i]*nums[i];
            }
        }
        return sum;
        
    }
};