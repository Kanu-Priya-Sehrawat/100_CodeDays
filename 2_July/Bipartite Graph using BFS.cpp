bool bipartiteBfs(int i, vector<int> adj[], int color[]){
        queue<int> q;
        q.push(i);
        color[i] = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                if(color[it] == -1){
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    memset(color, -1, sizeof color);
	    
	    for(int i=0; i<V; i++){
	        if(color[i]==-1){
	            if(!bipartiteBfs(i, adj, color))
	            return false;
	        }
	    }
	    return true;
	}
