#include<bits/stdc++.h>
using namespace std;

void findTopo(int i, vector<pair<int, int>> adj[], vector<int> &vis, stack<int> &s){
    vis[i] = 1;
    for(auto it:adj[i]){
        if(!vis[it.first])
        findTopo(it.first, adj, vis, s);
    }
    s.push(i);
}


void shortestPath(int src, int n, vector<pair<int,int>> adj[]){
    vector<int> vis(n, 0);
    stack<int> s;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            findTopo(i, adj, vis, s);
        }
    }
    int dist[n];
    for(int i=0; i<n; i++){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    while(!s.empty()){
        int node = s.top();
        s.pop();
        if(dist[node] != INT_MAX){
            for(auto it:adj[node]){
                if(dist[node]+it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second;
                }
            }

        }
    }

    for(int i=0; i<n; i++){
        (dist[i] == INT_MAX)?cout<<"Infinity": cout<<dist[i]<<" ";
    }

}


int main(){
    int v,e;
    cin>>v>>e;
    vector<pair<int, int>> adj[v];
    for(int i=0; i<e; i++){
        int u,v, wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v, wt});
    }
    
    shortestPath(0, v, adj);

    return 0;
}
