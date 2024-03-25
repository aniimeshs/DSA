class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>vec;

        for(auto num: nums){
            mp[num]++;
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second != 1){
                vec.push_back(it->first);
            }
        }
        return vec;
    }
};