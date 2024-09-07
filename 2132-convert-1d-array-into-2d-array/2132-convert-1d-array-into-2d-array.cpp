class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans(m, vector<int>(n, 0));
        int i = 0;
        int row = 0;
        if (original.size() != m * n) {
            return {}; 
        }
        while(i<original.size() && row < m) {
            int column = 0;
            
            while(column < n) {
                ans[row][column] = original[i];
                column++;
                i++;
            }
            row++;
        }
        return ans;
    }
};