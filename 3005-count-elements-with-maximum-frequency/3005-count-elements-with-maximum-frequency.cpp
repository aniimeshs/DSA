class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp;

        for(auto it: nums){
            mp[it]++;
        }
        int maxi = 0, freq = 0;
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second >= maxi) maxi = it->second;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second == maxi) freq += it->second;
        }
        return freq;
    }
};