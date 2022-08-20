#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    int t ; cin >> t ; 
    while(t--){
        ll n , k , b , s ; cin >> n >> k >> b >> s ;
        ll chk = (k-1)*n + k*b ;
        ll chk2 = k*b ;
        if(s > chk) cout << "-1\n" ;
        else if(s < chk2) cout << "-1\n" ;
        else {
            ll ar[n] = {0} ;
            ar[0] = k*b ;
            ll ext = s - k*b ;
            for(int i = 0 ; i < n && ext > 0 ; i++){
                    ar[i] += min(ext , k-1) ;
                    ext -= min(ext , k-1) ;
                }

            for(int i = 0 ; i < n ; i++){
                cout << ar[i] << " " ;
            }
            cout << endl ;
           

        }
    }
}