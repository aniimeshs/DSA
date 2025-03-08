class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mincnt = INT_MAX;

        for(int i = 0; i <= blocks.size() - k; i++) { 
            int cnt = 0;
            int j = i;
            while(j < k + i) {
                if(blocks[j] == 'W') cnt++;  
                j++;
            }
            mincnt = min(cnt, mincnt);
        }
        return mincnt;
    }
};