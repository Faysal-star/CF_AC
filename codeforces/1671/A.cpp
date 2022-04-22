#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        string s ; cin >> s ;
        int l = s.length() ;
        s += 'c' ;
        int flag = 0 , count = 1 ;
        for(int i = 0 ; i < l ; i++){
            if(s[i] == s[i+1]) count++ ;
            else {
                if(count < 2) {
                    flag = 1 ;
                    break ;
                }
                else {
                    count = 1 ;
                }
            }
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n";

    }
}