#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        float a ; cin >> a ; 
        float ans = 360.0 / (180.0 - a);
        if(floor(ans) == ceil(ans)) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}