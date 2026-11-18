class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> uS,uT;
        for(auto it : s) uS[it]++;
        for(auto it : t) uT[it]++;
        return (uS==uT);
    }
};
