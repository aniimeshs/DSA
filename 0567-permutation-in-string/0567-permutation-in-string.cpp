class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        vector<int> freq(26, 0);

        for (char c : s1) freq[c - 'a']++;
        int need = n;

        for (int i = 0; i < m; i++) {
            if (freq[s2[i] - 'a'] > 0) need--;
            freq[s2[i] - 'a']--;

            if (i >= n) {
                if (freq[s2[i - n] - 'a'] >= 0) need++;
                freq[s2[i - n] - 'a']++;
            }

            if (need == 0) return true;
        }

        return false;
    }
};