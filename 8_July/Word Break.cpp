bool dictContain(vector<string>& dict, string word){
    for(int i=0; i<dict.size(); i++){
        if(dict[i].compare(word)==0)
        return true;
    }
    return false;
}
int solve(string A, vector<string>& dict){
    int n = A.size();
    for(int i=1; i<=n; i++){
        string prefix = A.substr(0,i);
        if(dictContain(dict, prefix)){
            if(i==n)
            return 1;
            
            if(solve(A.substr(i, n-i), dict))
            return 1;
        }
    }
    return 0;
}
int wordBreak(string A, vector<string> &B) {
    //code here
    
    int res = solve(A, B);
    
    return res;
}
