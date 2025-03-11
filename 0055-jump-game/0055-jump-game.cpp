class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();

        //Initial Cases
        if(size==1)
            return true;
        if(nums[0]==0)
            return false;

        int max_pos = 0;
        for(int i=0;i<size-1;i++){
            if(i>max_pos)
                return false;
                
            if(nums[i]+i>max_pos)
                max_pos = nums[i]+i;

            if(max_pos>=size-1)
                return true;
        }
        return false;
    }
};