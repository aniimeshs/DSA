class Solution {
public:
    string arrangeWords(string text) {
        map<int,vector<string>> mp;
        string temp;
        int len = 0 ;
        for(char c : text) {
            if(c == ' ') {
                mp[len].push_back(temp);
                temp="";
                len = 0;
            } else {
                len+=1;
                c = tolower(c);
                temp+=c;
            }
        }
        mp[len].push_back(temp);
        string ans;
        for(auto it : mp){
            for(string s : it.second) {
                ans+= s;
                ans+= " ";
            }
        }
        ans.pop_back();
        
        ans[0] = toupper(ans[0]);
        return ans;
    }
};