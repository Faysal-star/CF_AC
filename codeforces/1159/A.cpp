#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int pl = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '-'){
            if(pl > 0) pl-- ;   
        }
        else pl++ ;
    }
    cout << pl ;
   
}

