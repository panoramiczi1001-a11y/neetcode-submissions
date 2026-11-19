class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int need = 0;
        for(int i = 0; i < nums.size(); i ++)
        {
            need = target - nums[i];
            auto it = seen.find(need);
            if(it != seen.end())
                return {it->second,i};
            seen[nums[i]] = i;
        }
        return {};
    }
};
