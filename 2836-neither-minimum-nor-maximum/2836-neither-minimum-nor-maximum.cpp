class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) {
            return -1;
        }   
        int a = min(nums[0], nums[1]);
        int b = max(nums[0], nums[1]);
        int c = nums[2];

        if(c<b && c>a) {
            return c;
        }
        else if (c>b) {
            return b;
        }
        else if (c<a) {
            return a;
        }
        return -1;
    }
};

//with using sort function
// class Solution {
// public:
//     int findNonMinOrMax(vector<int>& nums) {
//         int n = nums.size();
//         if(n>2) {
//             sort(nums.begin(), nums.end());
//             return nums[1];
//         }
//         return -1;
        
//     }
// };