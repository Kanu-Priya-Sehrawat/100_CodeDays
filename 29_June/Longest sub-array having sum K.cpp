int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int, int> m;
        int sum = 0;
        int ans = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
            
            // starting from zero index
            if(sum == K)
            ans = i+1;
            
            if(m.find(sum) == m.end())
            m[sum] = i;
            
            if(m.find(sum - K) != m.end()){
                ans = max(ans, i - m[sum - K]);
            }
            
             
        }
        return ans;
    } 
