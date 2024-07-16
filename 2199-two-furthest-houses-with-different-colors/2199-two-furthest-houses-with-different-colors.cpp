class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0;
        int j= colors.size()-1;
        while(i<=j) {
            if(colors[i]!=colors[j]) {
                return j-i;
            }
            i++;
        }
        return 1;
        
    }
};