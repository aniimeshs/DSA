class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows == 1) return s;

        string result = "";

        for(int row=0; row<nRows; row++){
            int increment = 2 * (nRows - 1);
            // For starting and ending rows
            for(int i = row; i<s.length(); i+= increment){
                result += s[i];
                // For middle rows
                if(row > 0 && row < nRows-1 && i + increment - 2 * row < s.length()){
                    result += s[i + increment - 2 * row];
                }
            }
        }
        return result;
    }
};