class Solution {
public:
    void dfs(int i, vector<int>& vis, vector<vector<int>>& adj){
        vis[i] = 1;
        for(auto it:adj[i]){
            if(!vis[it])
                dfs(it, vis, adj);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1)
            return -1;
        vector<vector<int>> adj(n);
        for(auto c:connections){
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        
        vector<int> vis(n,0);
        int components = 0;
        
        for(int i=0; i<n; i++){
            if(!vis[i]){
                components++;
                dfs(i, vis, adj);
            }
        }
        return components-1;
    }
};
