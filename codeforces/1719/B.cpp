#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , k ; cin >> n >> k ;
        if(k == 0) cout << "NO\n" ;
        else if(k%4 == 0) cout << "NO\n" ;
        else {
            cout << "YES\n" ;
            if(k&1){
                for(int i = 1 ; i <= n ; i+=2){
                    cout << i << " " << i+1 << endl ;
                }
            }
            else {
                int cnt = 1 ;
                for(int i = 1 ; i <= n ; i+=2 , cnt++){
                    if(cnt&1) cout << i+1 << " " << i << endl ;
                    else cout << i << " " << i+1 << endl ;
                }
            }
        }
    }
}