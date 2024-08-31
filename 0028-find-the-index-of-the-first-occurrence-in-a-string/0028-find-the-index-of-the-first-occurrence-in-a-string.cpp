class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i ++) {
            string temp = haystack.substr(i, needle.length());
            if(temp == needle) {
                return i;
            }
        }
        return -1;
        
    }
};