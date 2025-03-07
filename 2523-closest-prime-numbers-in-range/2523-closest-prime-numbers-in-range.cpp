class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> prime;
        for(int num = left; num <= right; num++) {
            if(isPrime(num)) prime.push_back(num);
        }

        int minimum = INT_MAX;
        int num1 = -1, num2 = -1;
        for(int i = 0; i < prime.size() - 1; i++) {
            int newMinimum = prime[i + 1] - prime[i];
            if(newMinimum < minimum) {
                num1 = prime[i];
                num2 = prime[i + 1];
                minimum = newMinimum;
            }
        }
        return {num1, num2};
    }
};