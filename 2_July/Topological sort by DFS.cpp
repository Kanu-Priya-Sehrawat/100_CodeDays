void topoDFS(int i, vector<int> adj[], stack<int>&s, vector<int>&vis){
	   vis[i] = 1;
	    for(auto it:adj[i]){
	        if(!vis[it])
	        topoDFS(it, adj, s, vis);
	    }
	    s.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> s;
	    vector<int> vis(V,0);
	    vector<int> res;
	    for(int i=0; i<V; i++){
	        if(!vis[i])
	        topoDFS(i, adj, s,vis);
	    }
	    while(!s.empty()){
	        res.push_back(s.top());
	        s.pop();
	    }
	    return res;
	    
	}
