class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int index = 0;
        char prev = chars[0];
        int start;

        for(int i = 1; i<chars.size(); i++) {
            if(chars[i] == prev) {
                count++;
            }
            else {
                chars[index++] = prev;
                if(count>1) {
                    start = index;
                    while(count) {
                        chars[index++] = (count % 10) + '0';
                        count = count/10;
                    }
                    reverse(chars.begin() + start, chars.begin() + index);
                }
                prev = chars[i];
                count = 1;
            }
        }
        chars[index++] = prev;
        if(count>1) {
            start = index;
            while(count) {
                chars[index++] = (count % 10) + '0';
                count = count/10;
            }
            reverse(chars.begin() + start, chars.begin() + index);
            }
        return index;
    }
};