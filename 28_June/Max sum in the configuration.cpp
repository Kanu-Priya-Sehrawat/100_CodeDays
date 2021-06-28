int max_sum(int A[],int N)
{
//Your code here
   
   int cur;
   int prev= 0;
   int cum_sum = 0;
   for(int i=0; i<N; i++){
       prev += i * A[i];
       cum_sum += A[i];
   }
   int ans = prev;
   for(int i=1; i<N; i++){
       cur = prev - cum_sum + A[i-1]*N;
       ans  = max(ans, cur);
       prev = cur;
   }
   
   return ans;

}
