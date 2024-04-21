class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int>s1;
        set<int>s2;

        for(auto c:word){
            if(c >= 'a' && c <= 'z') s1.insert(c - 'a');
            else s2.insert(c - 'A');
        }

        int count = 0;
        for(auto i : s1){
            if(s2.find(i) != s2.end()) count++;
        }

        return count;
    }
};