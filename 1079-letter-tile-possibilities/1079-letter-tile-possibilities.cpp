class Solution {
public:
    int count = 0;
    void helper(string nums, int start) {
        count++;
        for(int i = start; i < nums.size(); i++) {
            if(i == start || nums[start] != nums[i]) {
                swap(nums[start], nums[i]);
                helper(nums, start + 1);
            }
        }
        return;
    }
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(), tiles.end());
        helper(tiles, 0);
        return count - 1;
    }
};