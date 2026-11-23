class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxseq = 0;
        for(int i : nums)
            st.insert(i);
        for(int i :st)
        {
            if (st.count(i-1)) continue;
            int len = 0;
            int incre = i;
            while(st.count(incre++))
                len++;
            maxseq = max(maxseq,len);
        }
        return maxseq;
    }
};
