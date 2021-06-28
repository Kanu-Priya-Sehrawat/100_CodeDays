bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        bool res = false;
        for(int i=0; i<n-2; i++){
            int l=i+1, r = n-1;
            while(l<r){
                int sum = A[i] + A[l] + A[r];
                if(sum == X)
                {
                    res = true;
                    return res;
                }
            
                if(sum<X)
                l++;
                else
                r--;
            
            }
        }
    return res;
    }
