class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp;

        for(auto i: nums){
            mp[i]++;
        }

        int maxi = 0;
        int freq = 0;
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second >= maxi){
                maxi = i->second;
            }
        }

        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second == maxi){
                freq += i->second;
            }
        }
        return freq;
    }
};