#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        if(n&1) cout << "-1\n" ;
        else cout << "0 0 " << n/2 << "\n" ; 
        
    }
}