#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    for(int i = 1 ; i < s.length() ; i++ ){
        if(s[i] >= 'a' && s[i] <= 'z') return false ;
    }
    return true ;
}

int main(){
    string s ; 
    cin >> s ;

    if(check(s)){
       
        if(s[0] >= 'a' && s[0] <= 'z'){ 
            transform(s.begin() , s.end() , s.begin() , ::tolower) ;
            s[0] = toupper(s[0]) ;
        }
        else transform(s.begin() , s.end() , s.begin() , ::tolower) ;
    }
    
    cout << s ;
}