class Solution {
public:
    int getsum(string s) {
        int ans = 0;
        for(auto c: s) {
            ans = ans + (c - '0');
        }

        return ans;
    }

    int getLucky(string s, int k) {
        string ans;
        int result;

        for(auto c: s) {
            int temp =  (c - 'a' + 1);
            ans += std::to_string(temp);
        }

        
        while(k > 0) {
            int sum = getsum(ans); 
            ans = std::to_string(sum);
            k--;
        }
        

        return std::stoi(ans);
    }
};