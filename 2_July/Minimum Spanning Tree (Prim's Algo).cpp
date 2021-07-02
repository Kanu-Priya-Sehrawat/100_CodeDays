int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int parent[V];
        bool MST[V];
        int key[V];
        int sum = 0;
        for(int i=0; i<V; i++)
        key[i] = INT_MAX, MST[i] = false, parent[i] = -1;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0,0});
        parent[0] = -1;
        key[0] = 0;
        
        while(!pq.empty()){
            int u = pq.top().second;
            MST[u] = true;
            pq.pop();
            
            for(auto it:adj[u]){
                int v = it[0];
                int wt = it[1];
                if(MST[v]==false && wt < key[v]){
                    key[v] = wt;
                    parent[v] = u;
                    pq.push({key[v], v});
                }
            }
            
        }
        
        for(int i=1; i<V; i++)
        sum += key[i];
        
        return sum;
    }
