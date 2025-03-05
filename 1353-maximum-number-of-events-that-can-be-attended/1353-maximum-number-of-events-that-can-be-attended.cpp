class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int day = 0, index = 0, n = events.size(), result = 0;

        priority_queue<int, vector<int>, greater<int>> pq;
        while(!pq.empty() || index < n) {
            if(pq.empty()) day = events[index][0];
            while(index < n && events[index][0] <= day) {
                pq.push(events[index++][1]);
            }
            pq.pop();
            day++;
            result++;
            while(!pq.empty() && pq.top() < day) pq.pop();
        }
        return result;
    }
};