class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int bob;
        int alice;
        int n = nums.size();
        int min;
        int min2;
        int count = nums.size();
        int min_index;
        int min2_index;

        while(count>0) {
            min = INT_MAX - 10;
            for(int i=0;i<n;i++) {
                if(nums[i]<min && nums[i]!=INT_MAX) {
                    min = nums[i];
                    min_index = i;
                }
            }
            nums[min_index] = INT_MAX;

            alice = min;

            min2 = INT_MAX;
            for(int j=0;j<n;j++) {
                if(nums[j]<min2 && nums[j]!=INT_MAX) {
                    min2 = nums[j];
                    min2_index = j;
                }
            }
            nums[min2_index] = INT_MAX; 
            bob = min2;
            arr.push_back(bob);
            arr.push_back(alice);



            count = count - 2;
        }
        return arr;


        
        
    }
};