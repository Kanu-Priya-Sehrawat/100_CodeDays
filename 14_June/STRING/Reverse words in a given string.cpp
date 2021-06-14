class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int i = 0;
        int n = S.length();
        for(int j=1; j<S.length(); j++){
            if(S[j]=='.'){
                reverse(S.begin()+i, S.begin()+j);
                i = j + 1;
            }
        }
        reverse(S.begin()+i, S.begin()+n);
        reverse(S.begin(), S.end());
        
        return S;
    } 
};
