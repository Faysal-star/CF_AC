#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 , s2 ; 
    cin >> s1 >> s2 ;
    int f = 1 , l = s1.length() ;
    for(int i = 0 ; i < l ; i++){
        if(s1[i] != s2[l-i-1]) {
            f=0 ;
            break;
        }
    }

    cout << (f? "YES" : "NO") ;
}