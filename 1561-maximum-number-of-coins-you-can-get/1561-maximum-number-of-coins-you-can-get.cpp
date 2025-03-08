class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
    
        int res = 0;
        int n = piles.size() / 3;
        for (int i = piles.size() - 2; n > 0; i -= 2, --n) {
            res += piles[i];
        }
        return res;
    }
};