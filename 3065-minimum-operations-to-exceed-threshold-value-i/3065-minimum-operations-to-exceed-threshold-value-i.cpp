class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int i = 0, op = 0;
        while(i < nums.size()){
            if(nums[i] < k) op++;
            i++;
        }
        return op;
    }
};