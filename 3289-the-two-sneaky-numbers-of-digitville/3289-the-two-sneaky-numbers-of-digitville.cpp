class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> sneaky_nums;
        unordered_map<int, int>sneaky;
        for(int num : nums) {
            if(sneaky[num] == 1) sneaky_nums.push_back(num);
            sneaky[num]++;
        }
        return sneaky_nums;
    }
};