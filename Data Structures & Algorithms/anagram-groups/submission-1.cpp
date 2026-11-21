class Solution {
public:
    vector<int> getHash(string s)
    {
        vector<int> ret(26,0);
        for(char i : s)
        {
            ret[i - 'a']++;
        }
        return ret;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> seen;
        vector<vector<string>> ans;
        for(auto i : strs)
        {
            seen[getHash(i)].push_back(i);
        }
        for (auto i : seen)
            ans.push_back(i.second);
        return ans;
    }
};
