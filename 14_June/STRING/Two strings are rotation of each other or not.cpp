#include<bits/stdc++.h>
using namespace std;
bool checkRotations(string s1, string s2){
    if(s1.length() != s2.length())
    return false;
    
    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}

int main(){
    string str1 ="ravi";
    string str2 ="riav";
    cout<<checkRotations(str1, str2);
    return 0;
}
