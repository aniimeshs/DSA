class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int left = 1;
        int right = 1;
        vector<int> ans(n,1);

        for (int i = 0; i < n; i++){
            ans[i] = left*ans[i];
            left *= nums[i];
            ans[n-i-1] = right*ans[n-i-1];
            right *= nums[n-i-1];
        }
        return ans;
    }
};