class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> us;
        //across
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                char c = board[i][j];
                if(c == '.')
                    continue;
                if(us.contains(c))
                    return false;
                us.insert(c);
            }
            us.clear();
        }


        //down
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                char c = board[j][i];
                if(c == '.')
                    continue;
                if(us.contains(c))
                    return false;
                us.insert(c);
            }
            us.clear();
        }

        //sub squares
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                for(int k = 0; k < 3; k++)
                {
                    char c = board[((i%3)*3)+j][((i/3)*3) + k];
                    if(c == '.')
                        continue;
                    if(us.contains(c))
                        return false;
                    us.insert(c);
                }
            }
            us.clear();
        }
        return true;

    }
};
