#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        string s ; 
        cin >> s ; 
        int f = s[0] + s[1] + s[2] - 3 * '0' ;
        int l = s[3] + s[4] + s[5] - 3 * '0' ;
        if(f==l) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}