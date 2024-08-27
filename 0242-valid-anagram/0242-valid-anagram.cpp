class Solution {
public:
    bool isAnagram(string s, string t) {
        int table[256] = {0};

        for(int i=0; i<s.size(); i++){
            table[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            table[t[i]]--;
        } 

        for(int i=0; i<256; i++){
            if(table[i] != 0){
                return false;
            }
        }
        return true;
    }
};