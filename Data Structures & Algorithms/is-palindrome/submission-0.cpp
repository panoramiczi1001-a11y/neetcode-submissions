class Solution {
public:
    bool ischar(char c)
    {
        if (('0' <= c&& c <='9') || ('a' <= c&& c <= 'z' )|| ('A' <= c && c <= 'Z'))
            return true;
        else return false;
    }
    bool isPalindrome(string s) {
        string cleanS;
        for(auto it = s.begin();it < s.end();it++)
        {
            if (ischar(*it)) cleanS.push_back(tolower(*it));
        }
        string revS = cleanS;
        reverse(revS.begin(),revS.end());
        if (cleanS == revS) return true;
        return false;
    }
};
