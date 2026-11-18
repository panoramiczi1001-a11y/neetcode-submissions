class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto it = nums.begin(); it != nums.end();it++)
        {
            auto result = seen.insert(*it);
            if (!result.second) return true;
        }
        return false;
    }
};