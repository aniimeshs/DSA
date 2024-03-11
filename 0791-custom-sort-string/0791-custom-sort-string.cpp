class Solution {
public:
    string customSortString(string order, string s) {
        // unordered_map<char, int> charCount;
        // for (char c : order) {
        //     charCount[c] = 0;
        // }

        // for (char c : s) {
        //     if (charCount.find(c) != charCount.end()) {
        //         charCount[c]++;
        //     }
        // }

        // string str;
        // for (char c : order) {
        //     str.append(charCount[c], c); // charCount[c] gives count of characters.
        //     // Appending character from charCount in str a/c to occurences.
        // }

        // for (char c : s) {
        //     if (charCount.find(c) == charCount.end()) {
        //         str.push_back(c);
        //     }
        // }
        
        // return str;

        auto cmp = [&](char a,char b){
            return order.find(a) < order.find(b);
        };
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};