class Solution {
public:
    int expand(string s, int i, int j) {
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]) {
            i--;
            j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
      int totalCount = 0;

      for (int center = 0; center < s.length(); center++) {
        //ODD
        int OddKaAns = expand(s, center, center);

        //EVEN 
        int EvenKaAns = expand(s, center, center + 1);
        totalCount = totalCount + OddKaAns + EvenKaAns;

       } 
       return totalCount; 
    }
};


/// BRUETE FORCE APPROACH
// class Solution {
// public:
//     bool pallindrome(string sub) {
//         int i = 0;
//         int j = sub.length() - 1;
//         while(i<j) {
//             if(sub[i]==sub[j]) {
//                 i++;
//                 j--;
//             }
//             else {
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     int countSubstrings(string s) {
//         int count = 0;
//         int i = 0;
//         string sub = "";
//         bool pal;
//         while(i<s.length()) {
//             for(int j = i; j < s.length(); j++) {
//                 sub = s.substr(i, s.length() - j);
//                 pal = pallindrome(sub);
//                 if(pal) {
//                     count++;
//                 }
//             }
//             i++;
//         }
//         return count;
        
//     }
// };