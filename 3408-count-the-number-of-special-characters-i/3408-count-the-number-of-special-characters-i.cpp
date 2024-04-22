class Solution {
public:
    int numberOfSpecialChars(string s) {
        set<int>s_1;
        set<int>s_2;
        for(auto i:s) {
            if(i>='a' && i<='z')
                s_1.insert(i-'a');
            else
                s_2.insert(i-'A');
        }
        int c=0;
        for(auto i:s_1) {
            if(s_2.find(i)!=s_2.end())
                c++;
        }
        return c;
    }
};