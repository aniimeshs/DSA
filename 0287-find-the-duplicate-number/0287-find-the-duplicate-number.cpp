class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>count;
        for(auto num:nums){
            count[num]++;
        }

        for(auto it = count.begin(); it != count.end(); it++){
            if(it->second != 1){
                return it->first;
            }
        }
        return -1;
    }
};