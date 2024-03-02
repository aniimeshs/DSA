class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     nums[i] *= nums[i];
        // }
        // sort(nums.begin(), nums.end());
        // return nums;
        // TC: O(nlogn), SC: O(n)

        int n = nums.size();
        int s = 0, e = n - 1;
        vector<int>ans(n);

        for(int i=n-1; i>=0; i--){
            if(abs(nums[s]) >= abs(nums[e])){
                ans[i] = nums[s] * nums[s];
                s++;
            }
            else{
                ans[i] = nums[e] * nums[e];
                e--;
            }
        }
        return ans;
        // TC: O(n), SC: O(n)
    }
};