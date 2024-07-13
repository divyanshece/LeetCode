class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>diff;
        for(int i=0; i<n; i++) {
            diff.push_back(abs(x-arr[i]));
        }
        for(int i=0;i<n-1;i++) {
            int min_index = i;
            // checks the minimum index
            for(int j=i+1;j<n;j++) {
                if(diff[j]<diff[min_index]) {
                    min_index = j;
                }
                
            }

            swap(arr[i],arr[min_index]);
            //don't forget to update the difference array also for further comparisons
            swap(diff[i], diff[min_index]);

        }
        vector<int>ans;
        for(int i=0;i<k;i++) {
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};