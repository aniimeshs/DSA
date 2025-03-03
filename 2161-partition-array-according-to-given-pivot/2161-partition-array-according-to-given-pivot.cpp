class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int lessCount = 0, equalCount = 0;
    
        for (int num : nums) {
            if (num < pivot) lessCount++;
            else if (num == pivot) equalCount++;
        }

        vector<int> result(n);
        int i = 0, j = lessCount, k = lessCount + equalCount; 

        for (int num : nums) {
            if (num < pivot) result[i++] = num;
            else if (num == pivot) result[j++] = num;
            else result[k++] = num;
        }

        return result;
    }
};