bool isCyclic(int V, vector<int> adj[]) 
	{
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
	   	int count = 0;
	   	while(!q.empty()){
	   	    int node = q.front();
	   	    q.pop();
	   	    count++;
	   	    for(auto it:adj[node]){
	   	        inDegree[it]--;
	   	        if(inDegree[it]==0)
	   	        q.push(it);
	   	    }
	   	}
	   	if(count == V) return false;
	   	return true;
	}
