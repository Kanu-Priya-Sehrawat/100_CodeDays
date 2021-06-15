class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int n1 = s.length();
        int n2 = p.length();
        if(n1<n2)
        return "-1";
        
        int hash[256]={0}, count = 0;
        for(int i=0; i<n2; i++){
            if(hash[p[i]]==0)
            count++;
            
            hash[p[i]]++;
        }
        
        int i=0, j=0, stIndex;
        int cur_len, min_cur = INT_MAX;
        while(j<n1){
            hash[s[j]]--;
            
            if(hash[s[j]] == 0)
            count--;
            // for shifting i;
            if(count==0){
                while(count == 0){
                 cur_len = j-i+1;
                 if(cur_len < min_cur){
                     min_cur = cur_len;
                     stIndex = i;
                 }
                hash[s[i]]++;
                if(hash[s[i]]>0)
                count++;
                i++;
            }
            
           }
            j++;
        }
        
        if(min_cur == INT_MAX)
        return "-1";
        else
        return s.substr(stIndex, min_cur);
        
    }
    
};
