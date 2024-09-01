class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        // Calculate the parity (even or odd) of the sum of the row and column for both coordinates
        int sum1 = (coordinate1[0] - 'a') + (coordinate1[1] - '1');
        int sum2 = (coordinate2[0] - 'a') + (coordinate2[1] - '1');
        
        // If both sums are even or both are odd, the colors are the same
        return (sum1 % 2) == (sum2 % 2);
    }
};
