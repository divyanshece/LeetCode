class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--) {
            if(digits[i]<9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};

//overflow problem 
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int num = 0;
//         vector<int>result;


//         for(int i=0;i<digits.size();i++) {
//             num = num*10 + digits[i];
//         }
//         num = num + 1;
//         string nums = to_string(num);
//         int size = nums.length();
//         for(int i=0;i<size;i++) {
//             result.push_back(num%10);
//             num = num/10;
//         }
//         reverse(result.begin(),result.end());
//         return result;

        
//     }
// };