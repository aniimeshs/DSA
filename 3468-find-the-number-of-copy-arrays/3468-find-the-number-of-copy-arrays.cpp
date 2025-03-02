class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n = original.size();
    
        int minValue = bounds[0][0];
        int maxValue = bounds[0][1];

        for (int i = 1; i < n; i++) {
            int diff = original[i] - original[i - 1];

            int newMin = minValue + diff;
            int newMax = maxValue + diff;

            minValue = max(newMin, bounds[i][0]);
            maxValue = min(newMax, bounds[i][1]);
            if (minValue > maxValue) return 0;
        }

        return maxValue - minValue + 1;
    }
};