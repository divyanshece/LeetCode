class Solution {
public:
    bool isvowel(char chs) {
        char ch = tolower(chs);
        if(ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i<=j) {
            if(! isvowel(s[i])) {
                i++;
            }
            else if (! isvowel(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
        
    }
};