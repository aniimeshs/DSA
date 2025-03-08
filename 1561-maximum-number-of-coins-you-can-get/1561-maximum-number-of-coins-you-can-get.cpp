class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end);

        int i = 0, j = piles.size() - 2;
        int res = 0;
        while(i < j) {
            res += piles[j];
            j -= 2;
            i += 1;
        }
        return res;
    }
};