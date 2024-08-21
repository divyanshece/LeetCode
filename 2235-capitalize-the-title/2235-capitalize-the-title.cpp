class Solution {
public:
    string capitalizeTitle(string title) {
        int i = 0;
        int n = title.size();
        while (i < n) {
            while(i<n && title[i] == ' ') {
                i++;
            }
            int start = i;
            while(i<n && title[i] != ' ') {
                i++;
            }
            int end = i;
            if (end - start > 2) {
                title[start] = toupper(title[start]);
                for (int j = start + 1; j<end; j++) {
                    title[j] = tolower(title[j]);
                }
            }
            else {
                for (int j = start; j < end; j++) {
                    title[j] = tolower(title[j]);
                }
            }
        }
        return title;
        
    }
};