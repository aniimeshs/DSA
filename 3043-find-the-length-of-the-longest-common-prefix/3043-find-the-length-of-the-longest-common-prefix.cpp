class Solution {
public:
    int length(int n){
        string ans=to_string(n); 
        return ans.size();
    }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> unset;

        for(auto it:arr1){
            while(it>0){
                unset.insert(it);
                it/=10;
            }
        }

        int maxi=0;
        for(auto it:arr2){
            while(it>0){
                if(unset.find(it)!=unset.end()){//Checking whether the it is found in unset
                    maxi=max(maxi,length(it));
                    break;
                }
                it/=10;
            }
        }
        return maxi;
    }
};