class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>num;
        while(n>0) {
            num.push_back(n%10);
            n = n / 10;
        }
        reverse(num.begin(), num.end());
        for(int i=1; i<num.size(); i+=2) {
            num[i] = num[i] * (-1);
        }
        int sum = 0;
        for(int i=0; i<num.size(); i++) {
            sum = sum + num[i];
        }
        return sum;
        
    }
};