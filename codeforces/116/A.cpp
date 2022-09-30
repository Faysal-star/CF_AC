#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n ; cin >> n ; 
    int res = 0  , mx = 0;
    while(n--){
        int a , b ; cin >> a >> b ; 
        res += - a + b ; 
        mx = max(mx , res); 
    }
    cout << mx ; 
}