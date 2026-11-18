class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) return false;
        unordered_map<char,int> uS,uT;
        for(auto it : s) uS[it]++;
        for(auto it : t) uT[it]++;
        return (uS==uT);
    }
};
