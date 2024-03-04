class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size();
        int i = 0, max_h = 0;

        while(i < n){
            if(n - i <= citations[i]){
                max_h = max(n - i, max_h);
            }
            i++;
        }
        return max_h;
    }
};