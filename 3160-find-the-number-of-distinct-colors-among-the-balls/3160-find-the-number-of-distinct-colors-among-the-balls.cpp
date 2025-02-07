class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> mp, st; //current color, count of color
        vector<int> ans(queries.size());

        for(int i = 0; i < queries.size(); i++) {
            int ball = queries[i][0]; //ball number
            int col = queries[i][1]; //get color

            if(mp.find(ball) != mp.end()) {
                int existCol = mp[ball];

                if(st[existCol] == 1) st.erase(existCol);
                else st[existCol]--;

                mp[ball] = col;
                st[col]++;
            } else {
                mp[ball] = col;
                st[col]++;
            }
            ans[i] = st.size();
        }

        return ans;
    }
};