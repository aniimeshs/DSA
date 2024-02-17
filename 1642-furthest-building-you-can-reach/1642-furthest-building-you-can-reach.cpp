class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // int curr = 0;

        // while((bricks>0 || ladders > 0) && curr < heights.size()-1){
        //     if(heights[curr] < heights[curr+1]){
        //         if((heights[curr] + bricks >= heights[curr+1]) 
        //         || ladders > 0){
        //             if(bricks > 0 ){
        //                 bricks = (bricks + heights[curr]) 
        //                 - heights[curr+1];
        //             }
        //             else{
        //                 ladders--;
        //             }
        //             curr++;
        //         }
        //     }
        //     else{
        //         curr++;
        //     }
        // }
        // return curr;
        priority_queue<int>pQueue;

        int i = 0, diff = 0;
        for(i=0; i<heights.size()-1; i++){
            diff = heights[i+1] - heights[i];

            if(diff <= 0){
                continue;
            }

            bricks -= diff;
            pQueue.push(diff);

            if(bricks < 0){
                bricks += pQueue.top();
                pQueue.pop();
                ladders--;
            }

            if(ladders < 0) break;
        }
        return i;
    }
};