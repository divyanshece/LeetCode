class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max;
        for(int i=0;i<arr.size()-1;i++) {
            if(arr[i]>arr[i+1]) {
                max = i;
                break;
            }
        }
        return max;
        
    }
};