class Solution {
public:
    // Time complexity: O(n log n)
    // Space complexity: O(n)
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int>mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>pairs;

        for(auto it:mp){
            pairs.push_back(it);
        }
        
        sort(begin(pairs),end(pairs),[](auto a,auto b){
            return a.second<b.second;
        });

        int count = 0;
        for(auto it:pairs){
            if(k>=it.second){
                k-=it.second;
                count++;
            }else{
                break;
            }
        }

        return size(pairs)-count;
    }
};