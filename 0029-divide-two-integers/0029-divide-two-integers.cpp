class Solution {
public:
    int divide(int dividend, int divisor) {
        long long Dividend = abs(dividend);
        long long Divisor = abs(divisor);
        long long low = 0;
        long long high = Dividend;
        long long mid;
        long long ans = 0;


        while(low<=high) {
            mid = low + (high-low)/2;

            if(mid*Divisor==Dividend) {
                ans = mid;;
                break;
            }
            else if (mid*Divisor<Dividend) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        } 
        if((divisor<0 && dividend>0) || (divisor>0 && dividend<0)) {
            ans = 0 - ans;
        }
        else if (ans>INT_MAX) {
            return INT_MAX;
        }
        else if (ans<INT_MIN) {
            return INT_MIN;
        }
        return ans;  
           
    }
};