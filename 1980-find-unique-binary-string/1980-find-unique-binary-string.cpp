class Solution {
public:
    string toBinary(int num, int length) {
        string result;
        while (num > 0) {
            result = (char)('0' + (num % 2)) + result;
            num /= 2;
        }
        while (result.size() < length) {
            result = "0" + result;
        }
        return result;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> numSet(nums.begin(), nums.end());

        for (int i = 0; i < (1 << n); i++) { 
            string str = toBinary(i, n); 
            if (numSet.find(str) == numSet.end()) {
                return str;
            }
        }
        return "";
    }
};