class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int, int> myMap;
        vector<int> ans;
        int common = 0;

        for(int i = 0; i < n; i++) {
            if (++myMap[A[i]] == 2) common++;
            if (++myMap[B[i]] == 2) common++;
            ans.push_back(common);
        }
        return ans;
    }
};