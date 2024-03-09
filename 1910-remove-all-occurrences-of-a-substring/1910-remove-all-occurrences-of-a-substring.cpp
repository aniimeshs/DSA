class Solution {
public:
    string remove_substr(string& s, string& part, int pos){
        if(pos == string::npos){
            return s;
        }
        
        s.erase(pos, part.length());
        return remove_substr(s, part, s.find(part));
    }
    string removeOccurrences(string s, string part) {
        return remove_substr(s, part, s.find(part));
    }
};