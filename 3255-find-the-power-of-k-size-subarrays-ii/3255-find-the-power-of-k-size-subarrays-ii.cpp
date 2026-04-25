class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int streak = 1;

        for(int j = 0; j < nums.size(); j++) {
            if(j > 0 && nums[j] == nums[j-1] + 1) 
                streak += 1;
            else 
                streak = 1;
            
            if(j >= k - 1) {
                if(streak >= k)
                    ans.push_back(nums[j]);
                else
                    ans.push_back(-1);
            }
        }
        return ans;
    }
};