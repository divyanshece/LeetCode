class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char start = 'a';
        char mapping[300] = {0};
        for(auto ch: s) {
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            } 
        }
        char mapped[300] = {0};
        char end = 'a';
        for(auto ch: t) { 

            if(mapped[ch] == 0){
                mapped[ch] = end;
                end++;
            }

        }
        for(int i = 0; i<s.length(); i++) {
            if(mapped[t[i]] != mapping[s[i]]) {
                return false;
            }
        }
        return true;

        
    }
};