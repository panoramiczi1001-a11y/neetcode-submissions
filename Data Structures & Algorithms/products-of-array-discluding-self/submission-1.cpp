class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int acc = 1;
        int n = nums.size();
        vector<int> ret(n,1);
        for(int i = 0;i < n;i++)
        {
            ret[i] *= acc;
            acc *= nums[i];
        }
        acc = 1;
        for(int i = n-1; i >=0;i--)
        {
            ret[i] *= acc;
            acc *= nums[i];
        }
        return ret;
    }
};
