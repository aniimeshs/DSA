class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() - 1;
        while(n >= 0 && s[n] == ' ') n--; 
        /* Skip the trailing whitespaces */
        
        int len = 0;
        while(n >= 0 && s[n--] != ' ') len++; 
        /* Counting the letters in the last word */
        return len;
    }
};