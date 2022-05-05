#include<bits/stdc++.h>
typedef long long ll ; 
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        ll a , b , c , x , y ;
        cin >> a >> b >> c >> x >> y ;
        if((a+b+c) < (x+y)) cout << "NO\n" ;
        else{
            if(((a+c) >= x) && ((b+c) >= y)) cout << "YES\n" ;
            else cout << "NO\n" ;
        } 
    }
}