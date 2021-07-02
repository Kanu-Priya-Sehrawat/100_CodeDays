	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> res;
	    queue<int> q;
	    vector<int> inDegree(V,0);
	    for(int i=0; i<V; i++){
	        for(auto it:adj[i])
	        inDegree[it]++;
	    }
	    for(int i=0; i<V; i++){
	        if(inDegree[i]==0)
	        q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        res.push_back(node);
	        for(auto it:adj[node]){
	            inDegree[it]--;
	            if(inDegree[it]==0)
	            q.push(it);
	        }
	    }
	    
	    return res;
	}
