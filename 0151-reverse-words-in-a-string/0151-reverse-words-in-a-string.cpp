class Solution {
public:
    string reverseWords(string s) {
        // Remove extra spaces
        s.erase(unique(s.begin(), s.end(), [](char a, char b) {
            return a == ' ' && b == ' ';
        }), s.end());

        // Trim leading and trailing spaces
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
        
        int len = s.length();
        int st = 0, e = len-1;

        while(st < e){
            swap(s[st++], s[e--]);
        }

        for(int i=0; i<len; i++){
            int first = i;
            while(i < len && s[i] != ' '){
                ++i;
            }
            reverse(s.begin()+first, s.begin()+i);
        }
        return s;
    }
};