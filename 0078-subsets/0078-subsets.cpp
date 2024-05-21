class Solution {
public:
    void subs(vector<int>&nums, vector<vector<int>>&ans, vector<int>&output, int i , int n){
        if(i >= n){
            ans.push_back(output);
            return;
        }

        output.push_back(nums[i]);
        subs(nums, ans, output, i+1, n);
        output.pop_back();
        subs(nums, ans, output, i+1, n);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int n = nums.size();

        subs(nums, ans, output, 0, n);
        return ans; 
    }
};