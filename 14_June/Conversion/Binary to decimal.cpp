/* convert binary to decimal */
#include<bits/stdc++.h>
using namespace std;

double binToDec(string s){
    int len = s.length();
    double dec = 0, twos=1;
    size_t point = s.find('.');
    if(point == string::npos)
    point = len;
    
    
    for(int i=point-1; i>=0; i--){
       dec += (s[i]-'0')*twos;
       twos = 2*twos;
    }
    twos = 2;
    for(int i=point+1; i<len; i++){
        dec += (s[i]-'0')/twos;
        twos = 2.0*twos;
    }
    return dec;
}

int main(){
    string s = "110001.001";
    cout<<binToDec(s);
    
    return 0;
}
