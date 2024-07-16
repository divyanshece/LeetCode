class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Two pointer approach 
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(j>=0) {
            if(i>=0 && nums1[i]>nums2[j]) {
                nums1[k] = nums1[i];
                k--;
                i--; 
            }
            else {
                nums1[k] = nums2[j]; 
                j--;
                k--;
            }
        }
        
    }
};


// Brute force(intuitive approach)
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int k = 0;

//         for(int i=m;i<m+n;i++) {
//             nums1[i] = nums2[k];
//             k++;
//         }
//         sort(nums1.begin(), nums1.end());
//     }
// };