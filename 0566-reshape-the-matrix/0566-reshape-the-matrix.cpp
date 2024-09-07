class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r, vector<int>(c));
        int rows = mat.size();
        int columns = mat[0].size();
        if(rows*columns != r*c) {
            return mat;
        }
        vector<int>q;
        for(int i = 0; i<rows; i++) {
            for(int j =0; j<columns; j++) {
                q.push_back(mat[i][j]);
            }
        }
        int k = 0;
        for(int i = 0; i<r; i++) {
            for(int j = 0; j<c; j++) {
                ans[i][j] = q[k++];
            }
        }
        return ans;
        
    }
};