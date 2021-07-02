vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, S});
        
        while(!pq.empty()){
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();
            
            for(auto it:adj[node]){
                if(distance + it[1] < dist[it[0]]){
                    dist[it[0]] = distance + it[1];
                    pq.push({dist[it[0]], it[0]});
                }
            }
        }
        return dist;
    }
