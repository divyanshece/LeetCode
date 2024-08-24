class Solution {
public:
    bool pallindrome(string sub) {
        int i = 0;
        int j = sub.length() - 1;
        while(i<j) {
            if(sub[i]==sub[j]) {
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int count = 0;
        int i = 0;
        string sub = "";
        bool pal;
        while(i<s.length()) {
            for(int j = i; j < s.length(); j++) {
                sub = s.substr(i, s.length() - j);
                pal = pallindrome(sub);
                if(pal) {
                    count++;
                }
            }
            i++;
        }
        return count;
        
    }
};