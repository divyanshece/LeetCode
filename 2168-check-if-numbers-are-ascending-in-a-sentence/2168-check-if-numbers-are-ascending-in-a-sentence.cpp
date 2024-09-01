class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> ans;
        int curr = 0;
        int prev = -1;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                curr = 0;
                while (i < s.length() && isdigit(s[i])) {
                    curr = curr * 10 + (s[i] - '0');
                    i++;
                }
                if (curr <= prev) {
                    return false;
                }
                prev = curr;
            }
        }
        return true;
    }
};