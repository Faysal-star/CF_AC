#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string , int > m ; 
    set<string > se ;
    int t ; cin >> t ;
    while(t--){
        string s ; 
        cin >> s ; 
        m[s]++ ;
        se.insert(s);
    }


    string f = *next(se.begin() ,0) ;
    string f2 ;
    if(se.size() > 1) f2 = *next(se.begin() ,1) ;
    else f2 = '\0' ;
    
    cout << ((m[f] > m[f2]) ? f : f2); 
}