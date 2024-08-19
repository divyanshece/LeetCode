class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int start=0;
        int end=n;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }

    }
};