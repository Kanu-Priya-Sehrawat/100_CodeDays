void dfs(int node, vector<int> adj[], vector<int>&vis, vector<int> &storeDfs){
        storeDfs.push_back(node);
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it])
            dfs(it, adj, vis, storeDfs);
        }
    }
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> storeDfs;
	    vector<int> vis(V+1, 0);
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            dfs(i, adj, vis, storeDfs);
	        }
	    }
	    return storeDfs;
	}
