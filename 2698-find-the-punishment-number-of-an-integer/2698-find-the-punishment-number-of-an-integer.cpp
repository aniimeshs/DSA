class Solution {
public:
    bool canPartition(string str, int target) {
        if(str == "" && target == 0) return true;
        if(target < 0) return false;

        bool ans = false;
        for(int i = 0; i < str.size(); i++) { 
            string left = str.substr(0, i + 1);
            string right = str.substr(i + 1);
            int leftNum = stoi(left);

            bool isPossible = canPartition(right, target - leftNum);
            if(isPossible) {ans = true; break;}
        } 
        return ans;
    }
    int punishmentNumber(int n) {
        int sum = 0;
        for(int num = 1; num <= n; num++) {
            int sqr = num * num;
            if(canPartition(to_string(sqr), num)) sum += sqr;
        }
        return sum;
    }
};