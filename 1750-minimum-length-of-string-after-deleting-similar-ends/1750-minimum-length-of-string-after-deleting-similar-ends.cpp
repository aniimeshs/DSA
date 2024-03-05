class Solution {
public:
    int minimumLength(string s) {
        int prefix = 0;
        int suffix = s.length() - 1;
        
        while(prefix < suffix && s[prefix] == s[suffix]){
            char ch = s[prefix];

            while(prefix <= suffix && s[prefix] == ch) prefix++;
            while(prefix <= suffix && s[suffix] == ch) suffix--;
        }

        return suffix - prefix + 1;
    }
};