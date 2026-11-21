class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> ans;
        for(int i:nums) hashmap[i]++;
        for(auto &kv : hashmap) 
        {
            pq.push({kv.second,kv.first});
            if(pq.size() > k) pq.pop();
        }
        while(pq.size())
        {
            int i = pq.top().second;
            pq.pop();
            ans.push_back(i);
        }
        return ans;
    }
};
