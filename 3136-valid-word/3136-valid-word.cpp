class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    bool isValid(string word) {
        if (word.length() < 3) 
            return false;
    
        bool hasVowel = false;
        bool hasConsonant = false;
        bool notvalid = true;
    
        for (char c : word) {
            if (isalpha(c)) {
                if (isVowel(c)) {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }else if (!isdigit(c)) {
            // If it's not a digit or an alphabet, return false
                return false;
            }
        }
    
        return hasVowel && hasConsonant && notvalid;
    }
};