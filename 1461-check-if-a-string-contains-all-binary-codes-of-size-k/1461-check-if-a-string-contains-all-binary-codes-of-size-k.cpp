class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int required = pow(2, k);
        set<string> st;

        int i = 0, j = 0;
        string temp = "";

        while(j < s.length()) {
            temp += s[j];

            if(j - i + 1 == k) {
                st.insert(temp);
                temp.erase(0, 1);
                i++;
            }
            j++;
        }

        return st.size() == required;
    }
};