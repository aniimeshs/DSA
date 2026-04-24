class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> freq(101, 0);  
        vector<int> ans;

        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            freq[nums[j] + 50]++;

            if (j - i + 1 == k) {
                int count = 0;
                int beauty = 0;  

                for (int idx = 0; idx < 50; idx++) {
                    count += freq[idx];
                    if (count >= x) {
                        beauty = idx - 50;  
                        break;
                    }
                }

                ans.push_back(beauty);

                freq[nums[i] + 50]--;
                i++;
            }
        }

        return ans;
    }
};