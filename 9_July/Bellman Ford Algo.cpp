 vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        int inf = 100000000;
        vector<int> res;
        vector<int> dist(V, inf);
        dist[S] = 0;
        int flag=1;
        int i=0;
        while(flag && i<V-1){
            flag = 0;
            for(auto it:adj){
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                if(dist[u] + wt < dist[v]){
                     dist[v] = dist[u] + wt;
                     flag = 1;
                }
               
            }
            i++;
        }
        for(auto it:dist){
            res.push_back(it);
        }
        return res;
    }
