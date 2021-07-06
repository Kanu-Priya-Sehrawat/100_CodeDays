class Solution {
public:
    bool checkCycle(int i, vector<int>& vis, vector<int>& dfsVis, vector<int> adj[]){
        vis[i] = 1;
        dfsVis[i] = 1;
        for(auto it:adj[i]){
            if(!vis[it]){
                if(checkCycle(it, vis, dfsVis, adj))
                    return true;
            }
            else if(dfsVis[it])
                return true;
        }
        dfsVis[i] = 0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(numCourses, 0);
        vector<int> dfsVis(numCourses, 0);
        
        for(int i=0; i<numCourses; i++){
            if(!vis[i]){
                if(checkCycle(i, vis, dfsVis, adj))
                    return false;
            }
        }
        return true;
    }
};
