class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        vector<int>vec;
        for(auto it: points){
            int val = it[0];
            vec.push_back(val);
        }

        sort(vec.begin(), vec.end());
        int count = 1;
        int X_coordinate = vec[0];
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] <= X_coordinate + w){
                continue;
            }
            else{
                count++;
                X_coordinate = vec[i];
            }
        }
        return count;
    }
};