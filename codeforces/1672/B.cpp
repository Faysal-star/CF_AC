#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        string s ; 
        cin >> s ;
        
        int A = 0 , B = 0 , pos = 1 ;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'A') A++;
            else if(s[i] == 'B') B++ ;
            if(A < B) pos = 0 ;
        }

        if(s[s.length()-1] != 'B') cout << "NO\n";
        else if(pos) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}