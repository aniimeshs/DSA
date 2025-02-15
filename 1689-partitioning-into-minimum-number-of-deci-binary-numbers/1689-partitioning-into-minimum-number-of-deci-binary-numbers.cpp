class Solution {
public:
    int minPartitions(string n) {
        int len = n.length();
        int max_digit = 0;

        for(auto element : n) {
            int digit = element - '0';
            max_digit = max(max_digit, digit);
        }
        return max_digit;
    }
};