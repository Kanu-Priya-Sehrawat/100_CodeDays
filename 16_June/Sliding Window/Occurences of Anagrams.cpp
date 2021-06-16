int search(string pat, string txt) {
	    // code here
	    map<char, int> m;
	    for(auto c:pat) m[c]++;
	    int count = m.size();
	    int res = 0;
	    int i=0, j=0;
	    int k = pat.size();  // window size
	    
	    while(j<txt.length()){
	        
	        if(m.find(txt[j]) != m.end()){
	        m[txt[j]]--;
	        
	        if(m[txt[j]]==0)
	        count--;
	        }
	        
	        if(j-i+1 <k)
	        j++;
	        
	        else if(j-i+1 == k){
	            
	            if(count == 0)
	            res++;
	            
	            if(m.find(txt[i]) != m.end()){
	                m[txt[i]]++;
	                
	                if(m[txt[i]]==1)
	                count++;
	                
	            }
	            i++;
	            j++;
	            
	        }
	            
	            
	        }
	        return res;
	        
	    }
