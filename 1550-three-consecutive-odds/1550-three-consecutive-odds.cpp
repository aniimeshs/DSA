class Solution {
public:
    bool odd(int n) {
        return n % 2 != 0;
    }

    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size() < 3) return false; 

        for (int i = 0; i <= arr.size() - 3; ++i) {
            if (odd(arr[i]) && odd(arr[i + 1]) && odd(arr[i + 2])) {
                return true;
            }
        }
        
        return false;
    }
};