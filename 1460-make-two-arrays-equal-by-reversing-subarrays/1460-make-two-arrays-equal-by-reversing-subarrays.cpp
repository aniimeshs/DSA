class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int>check;

        for(int num : target) {
            check[num]++;
        }

        for(int num : arr) {
            check[num]--;
        }

        for(const auto& pair : check){
            if(pair.second != 0) return false;
        }

        return true;
    }
};