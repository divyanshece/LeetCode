class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>devices;
        int count;
        for(int i = 0; i<bank.size(); i++) {
            count = 0;
            for(int j =0; j<bank[i].size(); j++) {
                count = count + (bank[i][j] - '0');
            }
            devices.push_back(count);
        }
        int ans = 0;
        for(int i = 0; i<devices.size(); i++) {

            int j = i + 1;
            while(j<devices.size()) {
                ans = ans + devices[i]*devices[j];
                if(devices[j] == 0) {
                    j++;
                }
                else {
                    break;
                }
            }
        }
        return ans;

        
    }
};