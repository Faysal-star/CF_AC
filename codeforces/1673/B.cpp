#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        string s ; 
        cin >> s ; 
        set<char> ch(s.begin(),s.end()) ;
        int l = ch.size() ;
        int tr = 1 ;
        for(int i = l ; i < s.length() ; i++ ){
            if(s[i] != s[i-l]) {
                tr = 0 ; 
                break;
            }
        }

        cout << (tr ? "YES\n" : "NO\n") ;

    }
}