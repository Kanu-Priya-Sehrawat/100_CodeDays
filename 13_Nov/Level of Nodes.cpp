int levelOfX(int V, vector<int> adj[], int X) 
	{
	    // Code here
	    if(X == 0) return 0;
	    vector<int> vis(V, -1);
	    queue<int> q;
	    q.push(0);
	    vis[0] = 0;
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        for(auto it:adj[node])
	        {
	            if(vis[it] == -1 && it == X)
	            {
	               // cout<<"it :"<<it<<" x : "<<X<<" node : "<<node<<" vis[node] : "<<vis[node];
	                vis[it] = vis[node] + 1;
	                return vis[it];
	            }
	            
	            if(vis[it] == -1)
	            {
	                q.push(it);
	                vis[it] = vis[node] + 1;
	            }
	        }
	    }
	   // for(auto c:vis) cout<<c<<" ";
	    return -1;
	}
