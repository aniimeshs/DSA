class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int result = 0;
        unordered_map<char, int> vowels = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u' , 0}};
        int consonant_count = 0;
        int left = 0;

        for (int right = 0; right < word.length(); right++) {
            if (vowels.find(word[right]) != vowels.end()) {
                vowels[word[right]]++;
            } else {
                consonant_count++;
            }

            while (consonant_count > k) {
                if (vowels.find(word[left]) != vowels.end()) {
                    vowels[word[left]]--;
                } else {
                    consonant_count--;
                }
                left++;
            }

            bool all_vowels_present = true;
            for (const auto& pair : vowels) {
                if (pair.second == 0) {
                    all_vowels_present = false;
                    break;
                }
            }

            if (consonant_count == k && all_vowels_present) {
                result++;
            }
        }

        return result;
    }
};