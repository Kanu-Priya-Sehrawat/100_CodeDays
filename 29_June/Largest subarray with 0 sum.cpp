int maxLen(int A[], int n)
{
    // Your code here
    int ans = 0, sum = 0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        sum += A[i];
        
        if(sum == 0)
        ans = i+1;
        
        if(m.find(sum) == m.end())
        m[sum] = i;
        
        if(m.find(sum) != m.end())
        ans = max(ans, i-m[sum]);
    }
    return ans;
}
