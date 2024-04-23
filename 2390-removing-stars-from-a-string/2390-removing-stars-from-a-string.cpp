class Solution {
public:
    string removeStars(string s) {
        stack<char>characters;

        for(auto c:s){
            if(isalpha(c)){
                characters.push(c);
            }else{
                characters.pop();
            }
        }

        string result = "";
        while(!characters.empty()){
            result += characters.top();
            characters.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};