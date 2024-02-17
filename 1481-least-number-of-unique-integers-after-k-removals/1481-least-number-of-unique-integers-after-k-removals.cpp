class Solution {
public:
    // Time complexity: O(n log n)
    // Space complexity: O(n)
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int>mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<int>freq;

        for(auto it:mp){
            freq.push_back(it.second);
        }

        sort(freq.begin(), freq.end());
        
        //lambda function
        // auto cmp = [&](pair<int,int> a,pair<int,int> b){
        //     return a.second < b.second;
        // };
        // sort(pairs.begin(),pairs.end(),cmp);
        // sort(begin(pairs),end(pairs),[] (auto a, auto b){
        //     return a.second < b.second;
        // });

        int count = 0;
        for(auto it:freq){
            if(k>=it){
                k-=it;
                count++;
            }else{
                break;
            }
        }

        return size(freq)-count;
    }
};