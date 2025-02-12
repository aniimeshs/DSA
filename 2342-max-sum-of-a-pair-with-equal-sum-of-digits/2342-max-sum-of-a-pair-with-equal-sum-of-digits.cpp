class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> digitSum;
        for(int num : nums) {
            int sum = 0, temp = num;
            while(temp) {
                sum += temp % 10;
                temp /= 10;
            }
            digitSum[sum].push(num);
        }

        int ans = -1;
        for(auto& it : digitSum) {
            if(it.second.size() > 1) {
                int sum = it.second.top();
                it.second.pop();
                sum += it.second.top();
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};