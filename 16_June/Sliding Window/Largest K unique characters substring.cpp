int longestKSubstr(string s, int k) {
    // your code here
     unordered_map<char, int> h;
     int i=0, j=0;
     int count = 0;
     int ans = -1;
     while(j<s.size()){
         
         h[s[j]]++;
         if(h[s[j]]==1)
         count++;
         
         if(count<k)
         j++;
         
         else if(count == k){
             ans = max(ans, j-i+1);
             j++;
         }
         else{
             while(count>k){
                 h[s[i]]--;
                 
                 if(h[s[i]]==0)
                 count--;
                 
                 i++;
             }
             
             j++;
         }
     }
        
         return ans;
     
    }
