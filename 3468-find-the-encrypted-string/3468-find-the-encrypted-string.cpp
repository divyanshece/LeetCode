class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        int new_index;
        string ans = "";

        for(int i = 0; i < n;i++ ) {
            new_index = (i+k) % n ;

            ans.push_back(s[new_index]);

        }
        return ans;

        
        
    }
};