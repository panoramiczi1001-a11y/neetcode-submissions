class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n),suffix(n),ret(n);
        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];
        for(int i = 1;i < n;i++)
        {
            prefix[i] = nums[i] * prefix[i-1];
        }
        for(int j = n - 2; j >= 0;j--)
        {
            suffix[j] = nums[j] * suffix[j+1];
        }
        ret[0] = suffix[1];
        ret[n-1] = prefix[n-2];
        for(int k = 1; k < n - 1;k++)
            ret[k] = prefix[k-1] * suffix[k+1];
        return ret;
    }
};
