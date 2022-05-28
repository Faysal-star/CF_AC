#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ; 
    cin >> s ; 
    sort(s.begin() , s.end()) ;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '+') continue;
        else if(i < s.length()-1) cout << s[i] << "+" ;
        else cout << s[i] ;
    }
}