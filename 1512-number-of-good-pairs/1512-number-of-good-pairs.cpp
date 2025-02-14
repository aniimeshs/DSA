class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> freq;
        for(int num : nums) {
            ans += freq[num]++;
        }
        return ans;
    }
};