class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int s = 0; 
        int n = tokens.size();
        int e = n - 1;
        int score = 0, max_score = 0;

        while(s <= e){
            // Check if the token is greater than power
            // if token is greater than power then increase the score by 1 and
            // power is decreased by the token[i]
            if(power >= tokens[s]){
                power -= tokens[s++];
                score += 1;
                max_score = max(score, max_score);
            }
            // if power is less than token and score is atleast 1 then increase the
            // power by max token and score is decreased by 1.
            else if(score > 0){
                power += tokens[e--];
                score -= 1;
            }
            // if token is greater than power and score is not even 1
            else{
                break;
            }
        }
        return max_score;
    }
};