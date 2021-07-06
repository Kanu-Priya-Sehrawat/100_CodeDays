class Solution {
public:
        
    int ladderLength(string b, string e, vector<string>& w) {
        int n=w.size(), p = w[0].size();
        
        unordered_set<string> dict(w.begin(), w.end());
        if(dict.find(e) == dict.end())    return 0;
        queue<pair<string, int>> q;
        
        q.push({b, 1});
        dict.erase(b);
        
        while(!q.empty()){
            string word = q.front().first;
            int d = q.front().second;
            q.pop();
            
           for(int i=0; i<p; i++){
                char c = word[i];
               for(int k=0; k<26; k++){
                   word[i] = 'a' + k;
                   if(word == e) return d+1;
                   if(dict.find(word) != dict.end()){
                       q.push({word, d+1});
                       dict.erase(word);                       
                   }
               }
               word[i] = c;
            }
        }
        return 0;
    }
};
