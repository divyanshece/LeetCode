class Solution {
public:
    string sortSentence(string s) {
        vector<string> sentence(9);
        string word;
        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) {
                int pos = s[i] - '1';
                sentence[pos] = word;
                word = "";
                i++;

            } else if (s[i] == ' ') {
                continue;
            } else {
                word += s[i];
            }
        }

        string ans;
        for (auto word : sentence) {
            if (!word.empty()) {
                if (!ans.empty()) {
                    ans += " ";
                }
                ans += word;
            }
        }
        return ans;
    }
};
