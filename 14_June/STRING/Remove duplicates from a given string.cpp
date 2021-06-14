/* Remove Duplicates from given string */
#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
  unordered_set<char> h;
  int i = 0, j = 0;
  while(j<s.length()){
      if(h.find(s[j])==h.end()){
          s[i++] = s[j];
          h.insert(s[j]);
      }
      j++;
  }
  s = s.substr(0, i);
  return s;
}

int main(){
    string str = "geeksforgeeks";
    cout<<removeDuplicates(str);
    return 0;
}
