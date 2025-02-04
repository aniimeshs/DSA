class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();

        if (nums.size() <= 2) return false;

        for(int i = 1; i < n; i++) {
            nums[i - 1] = nums[i - 1] + nums[i];
        }
        nums.pop_back();

        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i - 1] == nums[i]) return true;
        }
        return false;
    }
};