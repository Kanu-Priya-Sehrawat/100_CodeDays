class Solution{

public:
	    void solve(string ip, string op, vector<string> &res){
	       if(ip.length()==0){
	            if(op.length()>0)
	            res.push_back(op);
	            return;
	       }
	       
	        string op1 = op;
	        string op2 = op;
	        
	        op2.push_back(ip[0]);
	        ip.erase(ip.begin()+0);
	        solve(ip, op1, res);
	        solve(ip, op2, res);
	        
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;
		    solve(s, "", res);
		    sort(res.begin(), res.end());
		    return res;
		}
};
