#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , m ; cin >> n >> m ;
        if(!(n&1) && !(m&1)) cout << "Tonya" ;
        else if((n&1) && (m&1)) cout << "Tonya" ;
        else cout << "Burenka" ;
        cout << endl ;

    }
}