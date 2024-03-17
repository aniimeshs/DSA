class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> prefixSumCount; // Map to store the count of prefix sums
        prefixSumCount[0] = 1; // Initialize with 0 sum encountered once
    
        for (int num : nums) {
            sum += num;
// Check if there exists a prefix sum which when subtracted from current sum equals goal
            count += prefixSumCount[sum - goal];
// Increment the count of current prefix sum
            prefixSumCount[sum]++;
        }
        return count;
    }
};