class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1 = 0;
        int cnt2 = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        string ans = string(cnt1-1, '1') + string(cnt2, '0') + '1';
        return ans;
    }
};