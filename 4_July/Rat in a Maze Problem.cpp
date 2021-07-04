#define MAX 5
class Solution{
    public:
    
    bool isSafe(int row, int col, vector<vector<int>>&m, int n, bool visited[][MAX]){
        if(row == -1 || row == n || col ==-1 || col == n|| visited[row][col]||m[row][col]==0)
        return false;
        
        return true;
    }
    
    
    void printPath(int row, int col, vector<vector<int>>&m, int n, bool visited[][MAX], vector<string> &possiblePath, string &path){
        
        if(row == -1 || row == n || col ==-1 || col == n|| visited[row][col]||m[row][col]==0)
        return;
        
        if(row == n-1 && col == n-1 ){
            possiblePath.push_back(path);
            return;
        }
        
        visited[row][col] = true;
        
        if(isSafe(row+1, col, m, n,visited)){
            path.push_back('D');
            printPath(row+1, col, m, n, visited, possiblePath, path);
            path.pop_back();
        }
        if(isSafe(row, col-1, m, n,visited)){
            path.push_back('L');
            printPath(row, col-1, m, n, visited, possiblePath, path);
            path.pop_back();
        }
        if(isSafe(row, col+1, m, n,visited)){
            path.push_back('R');
            printPath(row, col+1, m, n, visited, possiblePath, path);
            path.pop_back();
        }
        if(isSafe(row-1, col, m, n,visited)){
            path.push_back('U');
            printPath(row-1, col, m, n, visited, possiblePath, path);
            path.pop_back();
        }
        visited[row][col] = false;
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        bool visited[n][MAX];
        memset(visited, false, sizeof(visited));
        vector<string> possiblePath;
        string path;
        printPath(0,0, m, n, visited, possiblePath, path);
        return possiblePath;
    }
};
