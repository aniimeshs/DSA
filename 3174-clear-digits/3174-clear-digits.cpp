class Solution {
public:
    string clearDigits(string s) {
        int i = 0;
        while(i < s.length()) {
            if(isdigit(s[i])) {
                s.erase(i-1,2);
                i--;
            } 
            else i++;
        }
        return s;
    }
};