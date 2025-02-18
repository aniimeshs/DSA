class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
    
        // Calculate prefix sum
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }

        int count = 0;

        // Iterate through all possible column pairs
        for (int c1 = 0; c1 < n; c1++) {
            for (int c2 = c1; c2 < n; c2++) {
                unordered_map<int, int> h;
                h[0] = 1;
                int curr_sum = 0;

                for (int r = 0; r < m; r++) {
                    curr_sum = prefix[r + 1][c2 + 1] - prefix[r + 1][c1];
                    count += h[curr_sum - target];
                    h[curr_sum]++;
                }
            }
        }

        return count;
    }
};