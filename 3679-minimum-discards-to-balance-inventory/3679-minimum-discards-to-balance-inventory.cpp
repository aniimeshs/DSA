class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int n = arrivals.size();

        unordered_map<int, int> freq;
        vector<bool> kept(n, false);

        int discard = 0;

        for (int i = 0; i < n; i++) {
            if (i >= w) {
                int oldType = arrivals[i - w];
    
                if (kept[i - w]) {
                    freq[oldType]--;
    
                    if (freq[oldType] == 0) {
                        freq.erase(oldType);
                    }
                }
            }

            int type = arrivals[i];

            freq[type]++;

            if (freq[type] > m) {
                discard++;
                freq[type]--;       
                kept[i] = false;
            } else {
                kept[i] = true;
            }
        }
        return discard;
    }   
};