void dfs(int i, int s, int d, vector<int> adj[], int &ans)
    {
        if(i == d)
        {
            ans++;
            return;
        }
        
        for(auto it:adj[i])
        {
            dfs(it, s, d, adj, ans);
        }
    }
    int countPaths(int V, vector<int> adj[], int s, int d)
    {
        // Code here
        int ans = 0;
        dfs(s, s, d, adj, ans);
        return ans;
    }
