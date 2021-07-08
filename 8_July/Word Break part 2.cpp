class Solution{
public:
    bool dictContain(vector<string>& dict, string &word){
        for(int i=0; i<dict.size(); i++){
            if(dict[i].compare(word)==0)
            return true;
        }
        return false;
    }
    void solve(vector<string>& dict, string s,int n, vector<string>& res, string r){
        for(int i=1; i<=n; i++){
            string prefix = s.substr(0,i);
            if(dictContain(dict, prefix)){
                if(i==n){
                    r = r+prefix;
                    res.push_back(r);
                    return;
                }
                solve(dict, s.substr(i,n-i), n-i, res, r+prefix+" ");
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string> res;
        solve(dict, s, s.size(), res, "");
        return res;
    }
};
