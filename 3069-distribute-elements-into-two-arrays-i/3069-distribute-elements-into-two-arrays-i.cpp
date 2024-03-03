class Solution {
public:
    // vector<int> resultArray(vector<int>& nums) {
    //     stack<int>st1;
    //     stack<int>st2;

    //     int i = 0;

    //     st1.push(nums[i++]);
    //     st2.push(nums[i++]);

    //     while(i < nums.size()){
    //         if(st1.top() > st2.top()){
    //             st1.push(nums[i++]);
    //         }else{
    //             st2.push(nums[i++]);
    //         }
    //     }
        
    //     i = nums.size()-1;
    //     while(!st2.empty()){
    //         nums[i--] = st2.top();
    //         st2.pop();
    //     }
    //     while(!st1.empty()){
    //         nums[i--] = st1.top();
    //         st1.pop();
    //     }
    //     return nums;
    // }
    vector<int> resultArray(vector<int>& nums) {
        vector<int> vec1(1, nums[0]), vec2(1, nums[1]);
        for(int i= 2; i < nums.size(); ++i){
            if(vec1.back() > vec2.back()) 
                vec1.push_back(nums[i]);
            else 
                vec2.push_back(nums[i]);
        }
        vec1.insert(vec1.end(), vec2.begin(), vec2.end());
        return vec1;
    }
};