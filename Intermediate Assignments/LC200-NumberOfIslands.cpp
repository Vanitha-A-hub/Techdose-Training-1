class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col, int rowsize, int colsize)
    {
        if(row>=rowsize || col>=colsize || row<0 || col<0 || grid[row][col] == '0')
            return;
        grid[row][col] = '0';
        dfs(grid, row-1, col, rowsize, colsize);
        dfs(grid, row+1, col, rowsize, colsize);
        dfs(grid, row, col-1, rowsize, colsize);
        dfs(grid, row, col+1, rowsize, colsize);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        int rowsize = grid.size(), colsize = grid[0].size();
        for(int i=0; i<rowsize; i++)
        {
            for(int j=0; j<colsize; j++)
            {
                if(grid[i][j] == '1')
                {
                    islandCount++;
                    dfs(grid, i, j, rowsize, colsize);
                }
            }
        }
        return islandCount;
    }
};
