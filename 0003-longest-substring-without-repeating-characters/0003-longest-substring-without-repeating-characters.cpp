class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //To store the unique characters
        unordered_set<char> letters;
        int i = 0, j = 0;

        int result = 0; // To store the result;
        while (j < s.size()) {
            // Checking if s[j] is found in the set letters
            if (letters.find(s[j]) == letters.end()) {
                letters.insert(s[j]);
                result = max(result, j - i + 1);
                j++;
            }
            else {
                letters.erase(s[i]);
                i++;
            }
        }

        return result;
    }
};