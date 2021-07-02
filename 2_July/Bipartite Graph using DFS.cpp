bool bipartiteDfs(int i, vector<int> adj[], int color[]){
        if(color[i]==-1) color[i] = 0;
        for(auto it:adj[i]){
            if(color[it]==-1){
                color[it] = 1-color[i];
                if(!bipartiteDfs(it, adj, color))
                return false;
            }
            else if(color[it]==color[i])
            return false;
        }
        
       return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    memset(color, -1, sizeof color);
	    
	    for(int i=0; i<V; i++){
	        if(color[i]==-1){
	            if(!bipartiteDfs(i, adj, color))
	            return false;
	        }
	    }
	    return true;
	}
