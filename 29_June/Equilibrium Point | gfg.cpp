int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
        return 1;
        
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        long long leftSum = 0;
        for(int i=0; i<n; i++){
            sum = sum -a[i];
            if(leftSum == sum)
            return i+1;
            
            leftSum += a[i];
        }
        return -1;
    }
