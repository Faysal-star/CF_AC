#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    int x ; 
    map<int , int> t ;
    for(int i = 0 ; i < n ; i++){
        cin >> x ; 
        t[x]++ ;
    }

    int ans = 0 ; 
    ans += t[4] + t[3];
 
    t[1] -= t[3];
    if(t[2] & 1) {
        ans += t[2] / 2 + 1 ;
        t[1] -= 2 ;
    }
    else ans += t[2] / 2 ;
    


    if(t[1] > 0 ) {
        ans += ceil(t[1]/4.0) ;
    }

    cout << ans ;

}