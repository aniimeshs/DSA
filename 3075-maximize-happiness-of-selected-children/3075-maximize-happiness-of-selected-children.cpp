class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        int cnt = 0; // For happiness value decrement by 1 and iteration in happiness.
        long long value = 0;
        while(k > 0 && cnt < happiness.size()){
            if(happiness[cnt] - cnt >= 0) 
                value += happiness[cnt] - cnt;
            else 
                break;
            cnt++;
            k--;
        }
        return value;
    }
};