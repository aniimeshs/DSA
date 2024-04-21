class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>check;

        for(auto c:magazine){
            check[c]++;
        }

        for(auto c:ransomNote){
            if(check[c]-- == 0) return false;
        }
        return true;
    }
};