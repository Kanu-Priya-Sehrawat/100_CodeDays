class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int r = 0, l = 0;
        for(auto c:s){
            if(c=='R')
                r++;
            else
                l++;
            if(r == l)
                count++;
        }
        return count;
    }
};
