char getMaxOccuringChar(string str)
    {
        // Your code here
      int maxFreq = INT_MIN;
      char max;
      map<int, int> mp;
      for(int i=0; i<str.length(); i++){
          mp[str[i]]++;
      }
      
      for(auto c:mp){
          if(c.second>maxFreq){
              maxFreq = c.second;
              max = c.first;
          }
      }
      return max;
    }
