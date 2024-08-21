class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++) {
            if(s[i] <='Z' && s[i]>='A') {
                s[i] = s[i]-'A'+'a';
            }
        } 
        return s; 
    }
};


// Using inbuilt funtion ---
// class Solution {
// public:
//     string toLowerCase(string s) {
//         for (int i =0; i<s.size(); i++) {
//             s[i] = tolower(s[i]);
//         }
//         return s;
        
//     }
// };