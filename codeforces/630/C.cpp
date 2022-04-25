#include<bits/stdc++.h>
using namespace std;

long long pow2(int n){
    long long ans = 1 ;
    while(n--){
        ans *= 2 ;
    } 
    return ans ;
}
int main(){
    int n ; cin >> n ;
    long long ans = 0 ; 
    for(int i = 1 ; i <= n ; i++){
        ans += pow2(i) ;
        
    }
    cout << ans ;
}