class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();
        bool flag = true;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(m==n) {
            for(int i=0;i<m;i++) {
                if(s[i]!=t[i]) {
                    flag = false;
                }
            }   
        }
        else {
            return false;
        }
        return flag;
        
        


    }
};