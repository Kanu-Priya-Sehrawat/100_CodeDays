bool checkCycle(int i, vector<int> adj[], int vis[], int dfsVis[]){
	    vis[i] = 1;
	    dfsVis[i] = 1;
	    
	    for(auto it:adj[i]){
	        if(!vis[it]){
	            if(checkCycle(it, adj, vis, dfsVis))
	            return true;
	        }
	        else if(dfsVis[it])
	        return true;
	    }
	    
	    dfsVis[i] = 0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   int vis[V];
	   int dfsVis[V];
	   memset(vis, 0, sizeof vis);
	   memset(dfsVis, 0, sizeof dfsVis);
	   
	   for(int i=0; i<V; i++){
	       if(!vis[i]){
	           if(checkCycle(i, adj, vis, dfsVis))
	           return true;
	       }
	   }
	   return false;
	}
