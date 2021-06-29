int maxLen(int arr[], int N)
    {
        // Your code here
        for(int i=0; i<N; i++)
        arr[i] = (arr[i]==0)? -1:1;
        
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<N; i++){
            
            sum += arr[i];
            
            if(sum == 0)
            ans = i+1;
            
            if(m.find(sum) != m.end()){
                ans = max(ans, i-m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        
        return ans;
        
    }
