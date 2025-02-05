class Solution {
public:
    string digitSum(string s, int k) {
        string temp = "";

        while(s.length() > k) {
            int j = 0;
            int l = s.length() / k;
            while(l--) {
                int n = 0;
                for(int i = j; i < j + k; i++) {
                    n += s[i] - 48;
                }
                j = j + k;
                temp += to_string(n);
            }

            if(s.length() % k != 0) {
                int n = 0;
                for(int i = j; i < s.length(); i++){
                    n += s[i] - 48;
                }
                temp += to_string(n);
            }
            s.clear();
            s = temp;
            temp.clear();
        }
        return s;
    }
};