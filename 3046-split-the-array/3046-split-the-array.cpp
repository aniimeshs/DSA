class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;

        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i=i
        +2){
            arr1.push_back(nums[i]);
            arr2.push_back(nums[i+1]);
        }
        for(auto it:arr1){
            cout<<it<<" ";
        }cout<<endl;
        for(auto it:arr2){
            cout<<it<<" ";
        }
        for(int i=0; i<arr1.size(); i++){
            if(arr1[i] == arr1[i+1]){
                return false;
            }

        }

        for(int i=0; i<arr2.size(); i++){
            if(arr2[i] == arr2[i+1]){
                return false;
            }
        }
        return true;
    }
};