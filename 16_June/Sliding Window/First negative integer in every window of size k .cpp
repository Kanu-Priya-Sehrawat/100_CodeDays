vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                 vector<long long> res;
                 list<long long> l;
                 int i=0, j=0; 
                 while(j<N){
                     if(A[j]<0)
                     l.push_back(A[j]);
                     
                     if(j-i+1 < K)
                     j++;
                     
                     else if(j-i+1 == K){
                         if(!l.empty())
                         res.push_back(l.front());
                         else
                         res.push_back(0);
                         
                         if(l.front() == A[i]){
                             l.pop_front();
                         }
                         i++;
                         j++;
                     }
                     
                     
                 }
        return res;                           
 }
