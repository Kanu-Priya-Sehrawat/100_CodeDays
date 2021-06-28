bool isMajority(int a[], int ele, int n){
      int count = 0;
      for(int i=0; i<n; i++){
          if(a[i]==ele)
          count++;
      }
      return (count>n/2);
    }
    
    int majorityElement(int a[], int size)
    {
        int majIndex = 0;
        int count = 1;
        for(int i=1; i<size; i++){
            if(a[i] == a[majIndex])
            count++;
            else
            count--;
            if(count == 0){
                majIndex = i;
                count = 1;
            }
            
        }
        if(isMajority(a, a[majIndex], size))
        return a[majIndex];
        else
        return -1;
    }
