class Solution {
public:
    long long countPrefixSuffixPairs(vector<string>& words) {
        map<string, long long> prefix, suffix;
        long long ans = 0;
        for(auto w:words){
            int n = w.size();
            string pre="", suf="";
            for(int i=0; i<n; i++){
                pre += w[i];
                suf += w[n-i-1];
                if(prefix.count(pre) && suffix.count(suf)){
                    string temp = suf;
                    reverse(temp.begin(), temp.end());
                    if(temp==pre) ans += prefix[pre];
                }
            }
            prefix[pre]++;
            suffix[suf]++;
        }
        return ans;
    }
};
