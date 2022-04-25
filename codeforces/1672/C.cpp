#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        int a[n];
        for(int i = 0 ; i < n ; i++) cin >> a[i] ;

        int cntO = 0 , ans;

        for(int i = 0 ; i < n-1 ; i++){
            if(a[i] == a[i+1]) cntO++  ;
        }
        
       if(cntO < 2) cout << "0\n" ;
       else if(cntO == n-1) cout << n-3 << "\n" ;
       else{
           int l = -2 , r = -2 ;
           for(int i = 0 ; i < n - 1 ; i++){
               if(a[i] == a[i+1]){
                   if(l == -2){
                       l = i ; 
                       r = i + 1 ;
                   }
                   r = i+1 ;
               }
           }

           ans = r - l + 1 ;
           if(ans == 3) cout << "1\n" ;
           else cout << ans - 3 << "\n" ;
       }
       
    }
}