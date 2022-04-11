#include<iostream>
using namespace std;
int main(){
    string s ; 
    int len , slen ,count=0 ,h=0 , e= 0 , o = 0 , l=0; 
    cin >> s ;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'h') h++ ;
         if(s[i] == 'e' && h >= 1) e++ ;
          if(s[i] == 'l' && e >= 1) l++ ;
           if(s[i] == 'o' && l >= 2) o++ ;

    }   

    if(h >= 1 && e >= 1 && l >= 2 && o >= 1 && s.length() >= 5) cout << "YES" ;
    else cout << "NO" ;
}