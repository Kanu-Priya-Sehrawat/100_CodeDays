 char getMaxOccuringChar(string str)
    {
        // Your code here
        int hash[256] = {0};
        int max = -1;
        char res;
        int n = str.length();
        for(int i=0; i<n; i++)
          hash[str[i]]++;
        for(int i=0; i<n; i++){
            if(hash[str[i]]==max){
                if(str[i]<res)
                res = str[i];
            }
            else if(hash[str[i]]>max){
                max = hash[str[i]];
                res = str[i];
            }
        }
        return res;
    }
