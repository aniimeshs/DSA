class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int tres) {
        int n = arr.size();
        int cnt = 0, avg = 0;

        for(int i = 0; i <= n - k; i++){
            int sum = 0;
            for(int j = 0; j < k; j++){
                sum += arr[i+j];
            }
            avg = sum / k;
            if(avg >= tres) cnt++;
        }

        return cnt;
    }
};