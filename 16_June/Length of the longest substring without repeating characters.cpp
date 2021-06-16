int longestUniqueSubsttr(string S){
        //code
        vector<int> v(256, -1);
        int res = 0;
        int i=0;
        for(int j=0; j<S.size(); j++){
            
            i = max(i, v[S[j]] + 1);
            
            res = max(res, j-i+1);
            
            v[S[j]] = j;
        }
        return res;
    }
