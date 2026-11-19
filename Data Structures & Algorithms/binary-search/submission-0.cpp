class Solution {
public:
    int search(vector<int>& nums, int target) {
        int bottom = 0;
        int top = nums.size() - 1;
        int gap = INT_MAX;
        int curr = 0;
        while(bottom <= top)
        {
            curr = (top + bottom)/2;
            if(nums[curr] == target) return curr;
            if(nums[curr] > target) top = curr - 1;
            else bottom = curr + 1;
        }
        return -1;
    }
};
