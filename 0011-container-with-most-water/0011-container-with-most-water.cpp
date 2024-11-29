class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0, l = 0, r = heights.size()-1;

        while(l < r){
            int len = min(heights[l], heights[r]);
            int width = r - l;

            int currArea = len * width;
            if(heights[l] < heights[r]) l++;
            else r--;

            maxArea = max(maxArea, currArea);
        }

        return maxArea;
    }
};