class Solution {
public:
    bool allcapital(string s) {
        for (int i=0; i<s.size(); i++) {
            if(s[i]>='a' && s[i]<='z') {
                return false;
            }
        }
        return true;
    }
    bool allsmall(string s) {
        for (int i=0; i<s.size(); i++) {
            if(s[i]>='A' && s[i]<='Z') {
                return false;
            }
        }
        return true;

    }
    bool firstCapital(string s) {
        bool flag = false;
        if (s[0]>='A' && s[0]<='Z') {
            flag = true;
            for (int i=1; i<s.size(); i++) {
                if(s[i]>='A' && s[i]<='Z') {
                    flag = false;
                }
            }
        }
        return flag;
    }
    bool detectCapitalUse(string word) {
        return allcapital(word) || allsmall(word) || firstCapital(word);
        
    }
};