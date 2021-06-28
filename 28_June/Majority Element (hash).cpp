int majorityElement(int a[], int size)
    {
        map<int, int> m;
        for(int i=0; i<size; i++)
        m[a[i]]++;
    
        for(auto c:m){
            if(c.second > size/2)
            return c.first;
        }
       
        return -1; 
    }
