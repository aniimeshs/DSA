class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int streak = 1;
        int count = 0;

        for(int j = 1; j < n + k - 1; j++) {
            if(colors[j % n]!= colors[(j - 1) % n]) {
                streak++;
            } else {
                streak = 1;
            }

            if(streak >= k) {
                count++;
            }
        }

        return count;
    }
};