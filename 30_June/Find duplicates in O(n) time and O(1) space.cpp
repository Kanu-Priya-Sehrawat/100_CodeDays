 vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> res;
        for(int i=0; i<n; i++){
            if(arr[abs(arr[i])]>=0)
            arr[abs(arr[i])] = -1 * arr[abs(arr[i])];
            
            else{
            res.push_back(abs(arr[i]));
            arr[abs(arr[i])] = -1 * arr[abs(arr[i])];
            }
            
        }
        
        
        if(res.size()==0)
        return {-1};
        
        return res;
    }
