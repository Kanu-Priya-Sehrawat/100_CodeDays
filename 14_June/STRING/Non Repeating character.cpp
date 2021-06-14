
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char, int> mp;
       for(auto c:S) mp[c]++;
       for(auto c:S) {
           if(mp[c]==1)
           return c;
       }
       return '$';
       
    }

};
