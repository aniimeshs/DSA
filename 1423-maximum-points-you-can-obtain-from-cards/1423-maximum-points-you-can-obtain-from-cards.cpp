class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = accumulate(begin(cardPoints), end(cardPoints), 0);

        if (k == n) return totalSum;

        int windowSize = n - k;

        int i = 0, j = 0;
        int sum = 0, minSum = INT_MAX;

        while (j < n) {
            sum += cardPoints[j];

            if (j - i + 1 == windowSize) {
                minSum = min(minSum, sum);
                sum -= cardPoints[i];
                i++;
            }

            j++;
        }

        return totalSum - minSum;
    }
};