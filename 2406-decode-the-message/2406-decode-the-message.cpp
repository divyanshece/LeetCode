class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[300] = {0};

        for(auto ch: key) {
            //mapping
            if(ch != ' ' && mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

            // use mapping to decode the message 
            string ans;

            for(auto ch: message) {
                if(ch == ' ') {
                    ans.push_back(' ');
                }
                else {
                    ans.push_back(mapping[ch]);
                }
            }
        return ans;
        
    }
};