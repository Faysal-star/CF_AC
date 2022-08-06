#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , h , m ; 
        cin >> n >> h >> m ;
        int h1 = h*60 + m ;
        int ans = INT_MAX;
        while(n--){
            int h2 , m2 ;
            cin >> h2 >> m2 ;
            int h3 = h2*60 + m2 ;
            int tans = h3 - h1 ;
            if(tans<0)tans+=24*60;
            ans = min(ans,tans);   
        }
        int ans_h = ans/60 ;
        int ans_m = ans%60 ;
        cout << ans_h <<" " << ans_m << endl ;
    }
}