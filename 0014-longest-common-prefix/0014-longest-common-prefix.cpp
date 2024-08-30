class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    string ans;
    int i = 0;
    while(true) {
        char curr_ch = 0;
        for(auto ch: strs) {
            if(i >= ch.size()) {
                curr_ch = 0;
                break;
            }
            if(curr_ch == 0) {
                curr_ch = ch[i];
            }
            else if (ch[i] != curr_ch) {
                curr_ch = 0;
                break;
            }
        }
        if(curr_ch == 0) {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;


  }
};