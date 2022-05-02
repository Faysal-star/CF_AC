#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        string s;
        cin >> s ; 
        if(s[0] < s[1]){
             cout << (int)((s[0] - 'a')*25 + s[1] - 'a' ) << '\n' ; 
        }
        else {
             cout << (int)((s[0] - 'a')*25 + s[1] - 'a' + 1) << '\n' ; 
        }
        
    }
}