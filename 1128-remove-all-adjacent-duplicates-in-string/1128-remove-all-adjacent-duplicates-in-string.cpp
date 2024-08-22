class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        temp.push_back(s[0]);
        int j = 1;
        for(int i=1; i<s.length(); i++) {
            if(temp.length() > 0 && temp[temp.length()-1] == s[i]) {
                temp.pop_back();
            }
            else {
               temp.push_back(s[i]);
            }
        }
        return temp;
    }
};
//Very large time complexity -- Brute Force 
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int i = 0;
//         while (i<s.length()-1) {
//             if(s[i] == s[i+1]) {
//                 s.erase(i, 2);
//                 i = 0;
//                 if (s.length()==0) {
//                     return s;
//                 }
//             }
//             else {
//                 i++;
//             }
//         }
//         return s;
//     }
// };