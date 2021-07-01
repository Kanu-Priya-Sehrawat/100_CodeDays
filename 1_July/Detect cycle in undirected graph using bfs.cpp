 bool checkCycle(int i,vector<int> &vis, vector<int> adj[]){
        queue<pair<int, int>> q;
        q.push({i, -1});
        vis[i] = 1;
        
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it, node});
                }
                else if(parent != it)
                     return true;
            }
            
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V, 0);
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            if(checkCycle(i, vis, adj))
	            return true;
	        }
	    }
	    return false;
	}
