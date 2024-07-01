class Solution {
public:
    bool odd(int n){
        if(n % 2 != 0){
            return true;
        }else{
            return false;
        }
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0; i<arr.size()-2; i++){
            if(odd(arr[i]) && odd(arr[i+1]) && odd(arr[i+2])) 
                return true;
        }
        return false;
    }
};