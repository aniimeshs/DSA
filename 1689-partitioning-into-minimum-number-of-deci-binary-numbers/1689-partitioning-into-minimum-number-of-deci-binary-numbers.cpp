class Solution {
public:
    int minPartitions(string n) {
        // int len = n.length();
        // int max_digit = 0;

        // for(auto element : n) {
        //     int digit = element - '0';
        //     max_digit = max(max_digit, digit);
        // }
        // return max_digit;

        int max_digit = -1;
        for(char ch : n){
            max_digit = max(max_digit, ch - '0');
            if (max_digit == 9) break;
        }
        return max_digit;
    }
};