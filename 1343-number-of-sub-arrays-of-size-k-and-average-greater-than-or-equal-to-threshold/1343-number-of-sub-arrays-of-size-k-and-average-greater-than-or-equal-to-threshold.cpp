class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0, j = 0;
        int sum = 0, avg = 0;
        int count = 0;

        while( j < arr.size()) {
            sum += arr[j];
            if(j - i + 1 == k) {
                avg = sum / k;
                if(avg >= threshold) count++;
                sum -= arr[i++];
            }
            j++;
        } 
        return count;
    }
};