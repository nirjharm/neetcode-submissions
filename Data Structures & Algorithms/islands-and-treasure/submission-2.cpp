class Solution {
    int inf = 2147483647;
    void bfs(vector<vector<int>>& g, queue<pair<int, int>> q)
    {
        while(!q.empty())
        {
            auto node = q.front();
            int i=node.first;
            int j=node.second;
            q.pop();

            //go right
            if( j+1 < g[0].size() && g[i][j+1] == inf)
            {
                g[i][j+1] = g[i][j] + 1;
                q.push({i,j+1});
            } 
            //go left
            if(j-1 >= 0 && g[i][j-1] == inf)
            {
                g[i][j-1] = g[i][j] + 1;
                q.push({i,j-1});
            } 
            //go up
            if(i-1 >= 0 && g[i-1][j] == inf)
            {
                g[i-1][j] = g[i][j] + 1;
                q.push({i-1,j});
            }  

            //go down
            if(i+1 < g.size() && g[i+1][j] == inf)
            {
                g[i+1][j] = g[i][j] + 1;
                q.push({i+1,j});
            } 
        }
    }

public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                    q.push({i, j});
            }   
        }
        bfs(grid, q);
        return;
    }
};
