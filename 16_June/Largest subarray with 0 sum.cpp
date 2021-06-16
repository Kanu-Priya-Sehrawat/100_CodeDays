int maxLen(int A[], int n)
{
    // Your code here
    long sum = 0;
    int mx = 0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0)
        mx = i+1;
        
        if(m.find(sum) == m.end())
        m[sum] = i;
        else
        mx = max(mx, i-m[sum]);
      
    }
    return mx;
}
