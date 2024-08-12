class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(abs(nums[i]) < abs(ans)) ans = nums[i];
        }

        if(ans < 0 && find(nums.begin(), nums.end(), abs(ans)) 
        != nums.end()){
            return abs(ans);
        } else{
            return ans;
        } 
    }
};