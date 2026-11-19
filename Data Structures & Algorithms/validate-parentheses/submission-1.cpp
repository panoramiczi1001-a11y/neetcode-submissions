class Solution {
public:
    bool isValid(string s) {
        vector<char> stk;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            if (*it == '(' || *it == '[' || *it == '{')
                stk.push_back(*it);
            else{
                if (stk.empty()) return false;
                char c = stk.back();
                bool flag = false;
                switch (c){
                    case '{': if (*it == '}') flag = true ;break;;
                    case '[': if (*it == ']') flag = true ;break;;
                    case '(': if (*it == ')') flag = true ;break;;
                }
                if(flag == true) stk.pop_back();
                else return false;
            } 
        }
        return (stk.empty());
    }
};
