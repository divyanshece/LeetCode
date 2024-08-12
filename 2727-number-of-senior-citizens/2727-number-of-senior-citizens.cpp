class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0; i<details.size(); i++) {
            string s = details[i];
            int a = s[11] - '0';
            int b = s[12] - '0';
            int age = a*10 + b;
            if(age>60) {
                count++;
            }
        }
        return count;
    }
};