#include<bits/stdc++.h>
using namespace std;

string Reverse(string s){
    int n = s.length();
    for(int i=0; i<n/2; i++)
    swap(s[i], s[n-i-1]);
    return s;
}
int main(){
    string str ="ravi";
  
    cout<<Reverse(str);
    return 0;
}
