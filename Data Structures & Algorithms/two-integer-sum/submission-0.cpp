class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(auto i = nums.begin(); i < nums.end();i++)
        {
            for (auto j = i + 1; j < nums.end();j++)
            {
                if (*i + *j == target)
                {
                    answer.push_back(i - nums.begin());
                    answer.push_back(j - nums.begin());
                    break;
                }
            }
        }
        return answer;
    }
};
