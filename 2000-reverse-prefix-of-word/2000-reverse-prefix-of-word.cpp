class Solution {
public:
    string reversePrefix(string word, char ch) {
        int it = word.find(ch);

        reverse(word.begin(), word.begin()+it+1);
        return word;
    }
};