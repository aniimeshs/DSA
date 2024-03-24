class Solution {
public:
    int minOperations(int k) {
        int sq = ceil(sqrt(k));
        return (sq - 1) + ceil((double)k/sq) - 1;
    }
};