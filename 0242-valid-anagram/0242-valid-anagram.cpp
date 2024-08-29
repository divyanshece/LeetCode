class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag = false;
        int m = s.length();
        int n = t.length();
        if(m != n) {
            return flag;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i<s.length(); i++) {
            if(s[i] == t[i]) {
                flag = true;
            }
            else {
                return false;
            }
        }
        return flag; 
    }
};