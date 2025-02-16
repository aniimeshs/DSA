class Solution {
public:
    bool generateSequence(vector<int>& res, int num, int n) {
        if (num == 1) {
            for (int i = 0; i < res.size(); i++) {
                if (res[i] == 0) {
                    res[i] = 1;
                    return true;
                }
            }
        } else {
            for (int i = 0; i + num < res.size(); i++) {
                if (res[i] == 0 && res[i + num] == 0) {
                    res[i] = res[i + num] = num;
                    if (generateSequence(res, num - 1, n)) return true;
                    res[i] = res[i + num] = 0;
                }
            }
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> result(2 * n - 1, 0);
        vector<bool> used(n + 1, false);
        backtrack(result, used, n, 0);
        return result;
    }

private: 
        bool backtrack(vector<int>& result, vector<bool>& used, int n, int index) {
        while (index < result.size() && result[index] != 0) {
            index++;
        }
        if (index == result.size()) {
            return true;
        }

        for (int i = n; i >= 1; i--) {
            if (used[i]) continue;

            if (i == 1) {
                result[index] = 1;
                used[1] = true;
                if (backtrack(result, used, n, index + 1)) return true;
                result[index] = 0;
                used[1] = false;
            } else if (index + i < result.size() && result[index + i] == 0) {
                result[index] = i;
                result[index + i] = i;
                used[i] = true;
                if (backtrack(result, used, n, index + 1)) return true;
                result[index] = 0;
                result[index + i] = 0;
                used[i] = false;
            }
        }
        return false;
    }
};