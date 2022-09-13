#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int r = INT_MAX , st=0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] != '.'){
            r = min(r , i) ;
            if(s[i] == 'R'){
                while(s[i] == 'R') i++ , st=i;
                break;
            }
        }
    }
    if(st) cout << st << " " << st+1 ;
    else cout << r+1 << " " << r ;

}