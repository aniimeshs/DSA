class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = k - 1;
        int res = INT_MAX;

        while(right < nums.size()) {
            res = min(res, nums[right++] - nums[left++]);
        }

        return res;
    }
};