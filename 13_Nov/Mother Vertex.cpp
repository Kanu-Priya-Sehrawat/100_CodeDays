 bool isMother(int i, int v, vector<int> adj[], vector<int>& vis)
    {
        vis[i] = 1;
        for(auto it:adj[i])
        {
            if(!vis[it] && isMother(it, v, adj, vis))
            {
                return true;
            }
        }
        
        for(auto c:vis)
        {
            if(c == 0)
            return false;
        }
        
        return true;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here 
	    for(int i=0; i<V; i++)
	    {
	        vector<int> vis(V, 0);
	        if(isMother(i, V, adj, vis))
	        {
	            return i;
	        }
	    }
	    return -1;
	}
