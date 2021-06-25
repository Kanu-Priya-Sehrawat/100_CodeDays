
// Here the main thing is to print the nth move means from where to where 

class Solution{
public:
    int count = 0;
    vector<int> res;
    void movePlate(int n, int s, int d){
        count += 1;
        if(count == n){
            res.push_back(s);
            res.push_back(d);
            return;
        }
        
    }
    
    void movePile(int N, int n, int s, int d, int h){
        if(N>0 && count<n){
            movePile(N-1, n, s, h, d);
            if(res.size()>0)
            return;
            movePlate(n, s, d);
            movePile(N-1, n, h, d, s);
        }
    }
    
    vector<int> shiftPile(int N, int n){
        // code here
        movePile(N, n, 1, 3, 2);
        return res;
    }
};
