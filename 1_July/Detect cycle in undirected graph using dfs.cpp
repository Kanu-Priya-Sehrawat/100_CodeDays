
    bool checkCycle(int i, int parent, vector<int> &vis, vector<int> adj[]){
        vis[i] = 1;
        for(auto it:adj[i]){
            if(!vis[it]){
                if(checkCycle(it, i, vis, adj))
                return true;
            }
            else if(parent != it)
                return true;
        }
        return false;
    }
    
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V,0);
	    for(int i=0; i<V; i++){
	        
	        if(!vis[i]){
	            if(checkCycle(i, -1, vis, adj))
	            return true;
	        }
	    }
	    return false;
	}
