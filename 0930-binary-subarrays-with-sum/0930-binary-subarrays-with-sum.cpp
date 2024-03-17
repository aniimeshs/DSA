class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int count = 0;
//         int sum = 0;
//         unordered_map<int, int> prefixSumCount; // Map to store the count of prefix sums
//         prefixSumCount[0] = 1; // Initialize with 0 sum encountered once
    
//         for (int num : nums) {
//             sum += num;
// // Check if there exists a prefix sum which when subtracted from current sum equals goal
//             count += prefixSumCount[sum - goal];
// // Increment the count of current prefix sum
//             prefixSumCount[sum]++;
//         }
//         return count;
        int n = nums.size();
        int left1 = 0, left2 = 0, right = 0;
        int sum1 = 0, sum2 = 0;
        int ret = 0;
        while (right < n) {
            sum1 += nums[right];
            while (left1 <= right && sum1 > goal) {
                sum1 -= nums[left1];
                left1++;
            }
            sum2 += nums[right];
            while (left2 <= right && sum2 >= goal) {
                sum2 -= nums[left2];
                left2++;
            }
            ret += left2 - left1;
            right++;
        }
        return ret;            
    }
};