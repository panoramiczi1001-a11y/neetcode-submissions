struct ArrayHash {
    size_t operator()(const array<int,26>& a) const {
        size_t h = 0;
        for (int x : a) h = h * 131 + (size_t)x;
        return h;
    }
};


class Solution {
public:
    array<int,26> getHash(string s)
    {
        array<int,26> ret{};
        for(char i : s)
        {
            ret[i - 'a']++;
        }
        return ret;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<array<int,26>,vector<string>,ArrayHash> seen;
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
