class Solution {
public:
    void myLetterComb(string digits,string nums[], vector<string> &res, int i, string s){
        if(i == digits.length()){
            res.push_back(s);
            return;
        }
        
        string value = nums[digits[i]-'0'];
        for(int j=0; j<value.length(); j++){
            
            myLetterComb(digits, nums, res, i+1, s + value[j]);
            
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        int n = digits.length();
        if(n == 0)
            return res;
        
        string nums[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        myLetterComb(digits, nums, res, 0, "");
        return res;
        
    }
};
