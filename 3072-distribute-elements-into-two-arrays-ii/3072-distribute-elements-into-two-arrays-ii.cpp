class Solution {
public:
    int greatercount(vector<int>&arr, int val){
        return arr.end() - upper_bound(arr.begin(), arr.end(), val);
    }
    vector<int> resultArray(vector<int>& nums) {
        vector<int> vec1, vec2, left, right;
        left.push_back(nums[0]);
        right.push_back(nums[1]);
        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);

        int i = 0, j = 0;
        for(int index=2; index < nums.size(); index++){
            int cnt1 = greatercount(vec1, nums[index]);
            int cnt2 = greatercount(vec2, nums[index]);

            if(cnt1 > cnt2){
                vec1.insert(vec1.end() - cnt1, nums[index]);
                left.push_back(nums[index]);
                i++;
            }
            else if(cnt1 < cnt2){
                vec2.insert(vec2.end() - cnt2, nums[index]);
                right.push_back(nums[index]);
                j++;
            }
            else{
                if(i <= j){
                    vec1.insert(vec1.end() - cnt1, nums[index]);
                    left.push_back(nums[index]);
                    i++;
                }
                else{
                    vec2.insert(vec2.end() - cnt2, nums[index]);
                    right.push_back(nums[index]);
                    j++;
                }
            } 
        }
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};