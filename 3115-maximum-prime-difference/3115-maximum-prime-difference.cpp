class Solution {
public:
    bool isPrime(int num){
        if(num < 2) return false;
        if(num == 2) return true;
        for(int i = 2; i <= num/2; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        // int p1Index = 0, p2Index = 0;
        // int cnt = 0; 
        // for(int i = 0; i < nums.size(); i++){
        //     if(isPrime(nums[i])){
        //         if(cnt == 0){
        //             p1Index = i;
        //         }
        //         else{
        //             p2Index = i;
        //         }
        //         cnt++;
        //     }
        // }
        // if(cnt == 1 || cnt == 2) return 0;
        // else return p2Index - p1Index;
        vector<int>vec;
        for(int i = 0; i < nums.size(); i++){
            if(isPrime(nums[i])){
                vec.push_back(i);
            }
        }
        return vec[vec.size() - 1] - vec[0];
    }
};