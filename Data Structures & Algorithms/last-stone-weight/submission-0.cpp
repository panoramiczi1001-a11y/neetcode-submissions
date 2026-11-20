class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int x = INT_MIN;
        int y = INT_MIN;
        for(int i: stones) pq.push(i);
        while( pq.size() > 1)
        {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            if (x != y)
                pq.push(abs(x-y));
        }
        if (!pq.size()) return 0;
        else return pq.top();
    }
};
