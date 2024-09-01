class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int sign = 1;
        int i = 0;
        while (i<s.length() && isspace(s[i])) {
            i++;
        }
        if(s[i] == '-' || s[i] == '+') {
            sign = s[i] == '-' ? -1 : 1;
            i++;
        }
        

        while(i<s.length() && isdigit(s[i])) {
            if(ans > (INT_MAX - (s[i] - '0')) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;;
            }
            ans = ans * 10 + (s[i] - '0');
            i++;
        }
        return ans * sign;

        
    }
};