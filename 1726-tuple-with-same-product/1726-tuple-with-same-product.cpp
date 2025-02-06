class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int>checkMap;
        int ans = 0, n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                // ans += 8 * checkMap[product];
                checkMap[product]++;
            }
        }
        for(pair<int,int> m:checkMap){
            int freq = m.second;
            ans += (freq * (freq - 1)) / 2; //no. of tuple
        }
        return ans * 8;

        return ans;
    }
};