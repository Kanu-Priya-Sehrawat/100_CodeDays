
class Solution{
    public:
    void topo(int i, vector<int>& vis, string& ans, vector<int> adj[]){
        vis[i] = 1;
        for(auto it:adj[i]){
            if(!vis[it]){
                topo(it, vis, ans, adj);
            }
        }
        char ch = i+'a';
        ans = ch + ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        
        for(int i=0; i<N-1; i++){
            string word1 = dict[i];
            string word2 = dict[i+1];
            for(int j=0; j<min(word1.length(), word2.length()); j++){
                if(word1[j] != word2[j]){
                    adj[word1[j]-'a'].push_back(word2[j]-'a');
                    break;
                }
            }
            
        }
        
        vector<int> vis(K,0);
        string ans="";
        for(int i=0; i<K; i++){
            if(!vis[i]){
                topo(i, vis, ans, adj);
            }
        }
        
        
        return ans;
    }
};
