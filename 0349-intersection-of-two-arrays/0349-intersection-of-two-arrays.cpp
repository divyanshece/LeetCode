class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>numsA(nums1.begin(), nums1.end());
        set<int>numsB(nums2.begin(), nums2.end());
        set<int>result;
        vector<int>ans;
        set_intersection(numsA.begin(), numsA.end(), numsB.begin(), numsB.end(), inserter(result, result.begin()));
        for(int i : result) {
            ans.push_back(i);

        }
        return ans;



        
    }
};