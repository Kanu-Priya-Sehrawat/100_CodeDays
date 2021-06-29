 string largestMultipleOfThree(vector<int>& digits) {
        string res = "";
        int sum = 0;
        sort(digits.begin(), digits.end());
        queue<int> q0, q1, q2;
        for(int i=0; i<digits.size(); i++){
            sum += digits[i];
            if(digits[i]%3==0)
                q0.push(digits[i]);
            else if(digits[i]%3==1)
                q1.push(digits[i]);
            else
                q2.push(digits[i]);
            
        }
        
        if(sum%3 == 1){
            if(!q1.empty())
                q1.pop();
            else{
                if(!q2.empty())
                    q2.pop();
                else
                    return "";
                if(!q2.empty())
                    q2.pop();
                else 
                    return "";
                    
            }
        }
        else if(sum%3 == 2){
            if(!q2.empty())
                q2.pop();
            else{
                if(!q1.empty())
                    q1.pop();
                else
                    return "";
                if(!q2.empty())
                    q2.pop();
                else
                    return "";
            }
        }
        
       vector<int> temp;
       while(!q0.empty()){
           temp.push_back(q0.front());
           q0.pop();
       }
        
       while(!q1.empty()){
           temp.push_back(q1.front());
           q1.pop();
       }
        
        while(!q2.empty()){
           temp.push_back(q2.front());
           q2.pop();
       }
           
        sort(temp.begin(), temp.end(), greater<int>());
        if(temp.size()>0){
                
        for(int i=0; i<temp.size(); i++){
            res += to_string(temp[i]);
        }
            while(res[0]=='0' && res.size()>1)        // To remove the zero
                res.erase(res.begin());
         
        }
        
        return res;
        
    }
