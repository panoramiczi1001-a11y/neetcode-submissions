class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> seen;
        bool found = false;
        for(auto it = nums.begin();it != nums.end();it++)
        {
            auto f = find(seen.begin(),seen.end(),*it);
            if (f != seen.end()) found = true;
            seen.push_back(*it);
        }
        return found;
    }
};