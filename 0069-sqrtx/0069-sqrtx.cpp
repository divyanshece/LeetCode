class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) {
            return x;
        }

        int low = 1;
        int high = x;
        long long int mid;
        int ans;

         while(low<=high) {
            mid = low + (high-low)/2;

            if (mid*mid==x) {

                return mid;
            }

            if(mid*mid<x) {
                ans = mid;
                low = mid+1;
                
            }
        
            else {
                high = mid -1;
            }
         }
         return ans;


        
    }
};