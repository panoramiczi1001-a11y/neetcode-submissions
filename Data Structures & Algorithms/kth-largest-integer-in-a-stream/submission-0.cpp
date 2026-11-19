class KthLargest {
public:
    int kth;
    priority_queue<int,vector<int>,greater<int>> pq; 
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(int n: nums)
        add(n);
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > kth)
            pq.pop();
        return pq.top();
    }
};
