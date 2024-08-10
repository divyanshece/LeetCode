class Solution {
public:
    int addigits(int number) {
        int sum = 0;
        while(number>0) {
            sum =  sum + number % 10;
            number = number / 10;
        }
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++) {
            x = x + nums[i];
        } 

        int y = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]<10) {
                y = y + nums[i];
            }
            else {
                y = y + addigits(nums[i]);
            }
        }
        return abs(x - y);
        
    }
};