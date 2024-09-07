class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Check if the original array can be exactly filled into an m x n matrix
        if (original.size() != m * n) {
            return {}; // Return an empty 2D array
        }
        
        // Initialize the 2D array
        vector<vector<int>> ans(m, vector<int>(n, 0));
        
        int i = 0;
        for (int row = 0; row < m; ++row) {
            for (int column = 0; column < n; ++column) {
                ans[row][column] = original[i++];
            }
        }
        
        return ans;
    }
};
