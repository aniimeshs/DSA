class Solution {
public:
    int pivotInteger(int n) {
        double totalsum = n * (n+1) / 2;
        int rightsum = n;
        while(n != 0){
            if(totalsum != rightsum){
                totalsum -= n;
                rightsum += n-1;
                n--;
            }
            else{
                return n;
            }
        }
        return -1;
    }
};