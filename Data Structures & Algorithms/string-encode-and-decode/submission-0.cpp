class Solution {
public:

    string encode(vector<string>& strs) {
        string ret;
        for(auto i : strs)
        {
            ret.push_back(static_cast<unsigned char>(i.size()));
            ret.append(i);
        }
        return ret;
    }

    vector<string> decode(string s) {
        string::iterator it = s.begin();
        vector<string> ret;
        string curr;
        while (it != s.end())
        {
            curr = {};
            unsigned char len = static_cast<unsigned char>(*it++);
            int l = static_cast<int> (len);
            for(int i = 0;i < l;i++)
            {
                curr.push_back(*it++);
            }
            ret.push_back(curr);
        }
        return ret;
    }
    
};
