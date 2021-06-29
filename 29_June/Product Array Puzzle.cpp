 vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       if(n==1)
       return {1};
       long long int temp = 1;
       vector<long long int> res(n);
       
       for(int i=0; i<n; i++){
           res[i] = temp;
           temp *= arr[i];
       }
       temp = 1;
       for(int i=n-1; i>=0; i--){
           res[i] *= temp;
           temp *= arr[i];
       }     
       return res;
    }
