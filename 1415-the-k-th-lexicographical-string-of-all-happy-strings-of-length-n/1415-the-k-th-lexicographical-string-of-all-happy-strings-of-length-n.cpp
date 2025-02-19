class Solution {
public:
    void generateHappyString(int n, string &current, char lastChar, int &count, int k, string &result) {
        if (current.size() == n) {
            count++;
            if (count == k) {
                result = current;
            }
            return;
        }

        for (char c : {'a', 'b', 'c'}) {
            if (c != lastChar) {
                current.push_back(c);
                generateHappyString(n, current, c, count, k, result);
                current.pop_back();
                if (!result.empty()) return; 
            }
        }
    }
    string getHappyString(int n, int k) {
        string result = "";
        string current = "";
        int count = 0;
        generateHappyString(n, current, '\0', count, k, result);
        return result;
    }
};