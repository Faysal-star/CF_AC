#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ; 
    if(s == "WUB") cout << "" ;
    else if (s.length() <= 3) cout << s ;
    else {
        for(int i = 0 ; i < s.length()-2 ; i++){
        string st = ""; 
        st += s[i] ;
        st += s[i+1] ;
        st += s[i+2] ;

        if(st == "WUB"){
            s[i] = '-' ;
            s[i+1] = '-';
            s[i+2] = ' ' ;
        }
    }
        
        s.erase(remove(s.begin() , s.end() , '-'), s.end());
       
        for(int i = 0 ; i < s.length()-1 ; i++){
            if(s[i] == ' ' && s[i+1] == ' '){
                s.erase(i , 1) ;
            }
        }
       
        for(int i = 0 ; ; i++) {
            if(s[i] != ' ') break ;
            s.erase(i , 1) ;
            if(s[i] != ' ') break ;
        }
       
        for(int i = s.length()-1 ; ; i--) {
            if(s[i] != ' ') break ;
            s.erase(i , 1) ;
            if(s[i] != ' ') break ;
        }
        cout << s ;
    }

}