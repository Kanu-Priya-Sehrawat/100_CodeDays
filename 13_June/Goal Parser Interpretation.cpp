class Solution {
public:
    string interpret(string c) {
        string res = "";
        for(int i=0; i<c.length(); i++){
            if(c[i]=='G')
                res += 'G';
            else if(c[i]=='(' && c[i+1]==')'){
                res += 'o';
                i++;
            }
            else{
                res += "al";
                i = i+3;
            }
                
        }
        return res;
    }
};
