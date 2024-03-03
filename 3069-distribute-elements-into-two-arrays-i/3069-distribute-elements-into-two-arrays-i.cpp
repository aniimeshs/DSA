class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        stack<int>st1;
        stack<int>st2;

        int i = 0;

        st1.push(nums[i++]);
        st2.push(nums[i++]);

        while(i < nums.size()){
            if(st1.top() > st2.top()){
                st1.push(nums[i++]);
            }else{
                st2.push(nums[i++]);
            }
        }
        
        i = nums.size()-1;
        while(!st2.empty()){
            nums[i--] = st2.top();
            st2.pop();
        }
        while(!st1.empty()){
            nums[i--] = st1.top();
            st1.pop();
        }
        return nums;
    }
};