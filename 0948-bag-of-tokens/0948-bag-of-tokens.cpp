class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int s = 0; 
        int n = tokens.size();
        int e = n - 1;
        int score = 0, max_score = 0;

        while(s <= e){
            if(power >= tokens[s]){
                power -= tokens[s++];
                score += 1;
                max_score = max(score, max_score);
            }
            else if(score > 0){
                power += tokens[e--];
                score -= 1;
            }
            else{
                break;
            }
        }
        return max_score;
    }
};