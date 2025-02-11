class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nfreqs) {
        unordered_map<int, int> freq;
        for (int nfreq : nfreqs) {
            freq[nfreq]++;
        }

        vector<vector<int>> ans;
        while (!freq.empty()) {
            vector<int> temp, toErase;
            for (auto &[key, count] : freq) {
                temp.emplace_back(key);
                count--;
                if (count == 0)toErase.emplace_back(key);
            }
            ans.emplace_back(temp);
            for (auto &i : toErase){
                freq.erase(i);
            }
        }
        return ans;
    }
};