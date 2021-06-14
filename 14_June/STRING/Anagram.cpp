
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int n1 = a.length();
        int n2 = b.length();
        if(n1 != n2)
        return 0;
        
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(auto c:a) m1[c]++;
        for(auto c:b) m2[c]++;
        for(auto c:a){
            if(m1[c] != m2[c])
            return 0;
        }
        return 1;
    }

};
