class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int t = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;
        for(int i=0; i<items.size(); i++){
            if(items[i][t]==ruleValue)
                count++;
        }
        return count;
    }
};
