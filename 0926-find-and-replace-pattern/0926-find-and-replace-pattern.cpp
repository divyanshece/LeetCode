class Solution {
public:
    string createMap(string s) {
        char map[300] = {0};
        char start = 'a';
        string mappedString;

        for(auto ch: s) {
            if(map[ch] == 0) {
                map[ch] = start;
                start++;
            }
            mappedString += map[ch];
        }
        return mappedString;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string mapPattern = createMap(pattern);
        pattern = mapPattern;

        vector<string> ans;
        for(auto word: words) {
            if(createMap(word) == pattern) {
                ans.push_back(word);
            }
        }
        return ans;
        
    }
};