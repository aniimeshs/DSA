class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> last {{'a', -1 }, {'b', -1}, {'c', -1}};
        int cnt = 0;

        for(int i = 0; i < s.size(); i++) {
            last[s[i]] = i;
            if(last['a'] != -1 && last['b'] != -1 && last['c'] != -1 ){
                cnt += min({last['a'], last['b'], last['c']}) + 1;
            }
        }

        return cnt;
    }
};