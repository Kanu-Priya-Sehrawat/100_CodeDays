 void solve(string ip, string op, vector<string>&res){
        if(ip.length()==0){
            res.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        op1.push_back(' ');
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip, op1, res);
        solve(ip, op2, res);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> res;
        string ip = S;
        string op = "";
        op.push_back(S[0]);
        ip.erase(ip.begin()+0);
        solve(ip, op, res);
        return res;
    }
