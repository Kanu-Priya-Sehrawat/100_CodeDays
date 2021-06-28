int closestToZero(int arr[], int n)
        {
            int l=0, r = n-1;
            int sum, closetSum = INT_MAX;
            sort(arr, arr+n);
            while(l<r){
                sum = arr[l] + arr[r];
                
                if(sum == 0)
                return 0;
                
                if(abs(closetSum) == abs(sum))
                closetSum = max(closetSum, sum);
                
                if(abs(closetSum)>abs(sum))
                closetSum = sum;
                
                if(sum<0)
                l++;
                else
                r--;
            }
            return closetSum;
        }
