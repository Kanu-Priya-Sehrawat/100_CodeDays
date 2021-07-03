struct node{
	     int u;
	     int v;
	     int wt;
	     node(int a, int b, int w){
	         u = a;
	         v = b;
	         wt = w;
	     }
	 };
bool cmp(node a, node b){
         return a.wt<b.wt;
     }

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	
	 
     
     int findPar(int u, vector<int>&parent){
         if(u == parent[u]) return u;
         
         return findPar(parent[u], parent);
     }
     
     void unionn(int u, int v, vector<int> &parent, vector<int> &rank){
         u = findPar(u, parent);
         v = findPar(v, parent);
         
         if(rank[u]<rank[v]){
             parent[u] = v;
         }
         else if(rank[v]<rank[u]){
             parent[v] = u;
         }
         else{
             parent[v] = u;
             rank[u]++;
         }
     }
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<node> edges;
        for(int i=0; i<V; i++){
            for(auto it:adj[i]){
                edges.push_back(node(i, it[0], it[1]));
            }
        }
        
        sort(edges.begin(), edges.end(), cmp);
        
        vector<int> parent(V);
        for(int i=0; i<V; i++)
        parent[i] = i;
        
        vector<int> rank(V,0);
        
        int cost = 0;
        
        for(auto it:edges){
            if(findPar(it.u, parent) != findPar(it.v, parent)){
                cost += it.wt;
                unionn(it.u, it.v, parent, rank);
            }
        }
        return cost;
    }
};
