class Solution {
public:
    vector<vector<char>> b;
    bool checkrows()
    {
        for(int i = 0;i < 9;i++)
        {
            vector<int> temp;
            for (int j =0 ;j < 9;j++)
            {
                if(b[i][j]=='.') continue;
                int num = static_cast<int>(b[i][j] - '0');
                if(find(temp.begin(),temp.end(),num) != temp.end()) return false;
                temp.push_back(num);
            }
        }
        return true;
    }

    bool checkcolumns()
    {
        for(int j = 0;j < 9;j++)
        {
            vector<int> temp;
            for (int i =0 ;i < 9;i++)
            {
                if(b[i][j]=='.') continue;
                int num = static_cast<int>(b[i][j] - '0');
                if(find(temp.begin(),temp.end(),num) != temp.end()) return false;
                temp.push_back(num);
            }
        }
        return true;
    }

    bool checkboxes()
    {
        for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 3; j++)
            {
                vector<int> temp;
                for(int p = 3 * i;p < 3*i + 3;p++)
                {
                    for(int q = 3 * j;q < 3*j + 3;q++)
                    {
                        if(b[p][q]=='.') continue;
                        int num = static_cast<int>(b[p][q] - '0');
                        if(find(temp.begin(),temp.end(),num) != temp.end()) return false;
                        temp.push_back(num);
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        b = board;
        return checkrows() && checkcolumns() && checkboxes();
    }
};
