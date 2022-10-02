#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int ar[n] , sar[n] , f = 1;
        cin >> ar[0] ;
        sar[0] = ar[0] ;
        for(int i = 1 ; i < n ; i++){
            cin >> ar[i] ;
            sar[i] = sar[i-1]+ar[i] ;
            if(ar[i] == 0) continue;
            if(sar[i-1] >= ar[i]) f = 0 ;
        }
        if(f) for(int i = 0 ; i < n ; i++) cout << sar[i] << " " ;
        else cout << "-1" ;
        cout << "\n" ;

    }
   
}