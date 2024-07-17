class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1(nums1.begin(), nums1.end());
        set<int>set2(nums2.begin(), nums2.end());

        vector<int>distinct_1;
        vector<int>distinct_2;
        for(int x: set1) {
            if(set2.count(x)==0) {
                distinct_1.push_back(x);
            }
        }
        for(int x: set2) {
            if(set1.count(x)==0) {
                distinct_2.push_back(x);
            }
        }
        vector<vector<int>>ans;
        ans.push_back(distinct_1);
        ans.push_back(distinct_2);
        return ans;


        
    }
};