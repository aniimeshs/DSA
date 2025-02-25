class Solution {
public:
    int modulo = 1000000007;
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0;
        int prefixSum = 0;
        for(int a : arr) {
            prefixSum += a;
            count += prefixSum % 2;
        }
        count += (arr.size() - count) * count;
        return count % modulo;
    }
};