#define MAX 500
class Solution
{
    public:
    //Function to find the number of islands.
    bool isSafe(int row, int col, bool visit[][MAX],  vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
      
        if(row == -1 || row == n || col == -1 || col == m || visit[row][col]  ||grid[row][col]=='0')
        return false;
        
        return true;
    }
    void dfs(int row, int col, bool visit[][MAX], vector<vector<char>>& grid){
        static int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
        static int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};
        
        visit[row][col] = true;
        for(int i=0; i<8; i++){
            if(isSafe(row+dr[i], col+dc[i], visit, grid))
            dfs(row+dr[i], col+dc[i], visit, grid);
        }
        
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        
        bool visit[n][MAX];
        memset(visit, false, sizeof(visit));
        int components = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visit[i][j]==false && grid[i][j]=='1'){
                components++;
                dfs(i, j, visit, grid);
                }
            }
        }
        return components;
    }
};
