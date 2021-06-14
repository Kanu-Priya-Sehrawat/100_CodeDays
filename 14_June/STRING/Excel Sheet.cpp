class Solution{
    public:
    string ExcelColumn(int N)
    {
        string res;
        while(N>0){
            int rem = N%26;
            
            if(rem == 0){
                res += 'Z';
                N = N/26 - 1;
            }
            else{
                res += (rem-1) + 'A';
                N = N/26;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
