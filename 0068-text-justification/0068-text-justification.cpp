class Solution {
public:
    string spaceJustifier(string str, int maxWidth, int isLast){
        if(str.length() == maxWidth)
            return str;

        int spacesInString = 0; 
        for(int i = 0; i<str.length(); i++){
            if(str[i] == ' ')
                spacesInString++;
        }
        int spacesToBeInserted = maxWidth - str.length();
        if(spacesInString == 0 || isLast == 1){ 
            str.insert(str.length(), spacesToBeInserted,' '); 
            return str;
        }
        int eachSlot = spacesToBeInserted / spacesInString; 
        int leftOverSpace = spacesToBeInserted % spacesInString; 

        for(int i = 0; i<str.length(); i++){
            if(str[i] == ' ' && (eachSlot > 0 || leftOverSpace >0 )){ 
                int noOfSpaces = eachSlot + ((leftOverSpace--) > 0 ? 1:0);
                str.insert(i, noOfSpaces , ' ');
                i+=noOfSpaces;  
            }
        }
        return str;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>answer;
        string result = words[0];

        for(int i = 1; i < words.size(); i++){
            if(result.length() + words[i].length() + 1 <= maxWidth){
                result += " " + words[i];
            }else{
                result = spaceJustifier(result, maxWidth, 0);
                answer.push_back(result);
                result = words[i];
            }
        }
        result = spaceJustifier(result, maxWidth, 1); 
        answer.push_back(result); 
        return answer;
    }
};