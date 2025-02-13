class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // priority_queue<long long, vector<long long>, greater<long long>>
        // pq (nums.begin(), nums.end()); 
        // int operations = 0;

        // while (pq.size() > 1 && pq.top() < k) {
        //     long long x = pq.top(); pq.pop();
        //     long long y = pq.top(); pq.pop();

        //     long long newElement = min(x, y) * 2LL + max(x, y);
        //     pq.push(newElement);
        //     operations++;
        // }

        // return operations;
        vector<long long> heap(nums.begin(), nums.end());
        make_heap(heap.begin(), heap.end(), greater<long long>());
        int operations = 0;

        while (heap.size() > 1 && heap.front() < k) {
            pop_heap(heap.begin(), heap.end(), greater<long long>());
            long long x = heap.back(); heap.pop_back();

            pop_heap(heap.begin(), heap.end(), greater<long long>());
            long long y = heap.back(); heap.pop_back();

            heap.push_back(x * 2 + y);
            push_heap(heap.begin(), heap.end(), greater<long long>());
            operations++;
        }

        return operations;
    }
};