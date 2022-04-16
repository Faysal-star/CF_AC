#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        long int n , k ;
        int count = 0 ;
        cin >> n >> k ;
        int i ;
        long int x ;

        if( k % (n-1) == 0 ){
            x =  k / (n-1) ;
            i = n*x - 1 ;
        }
        else {
            x = k / (n-1) ;
             i = n * x + k - x*(n-1) ;

        }
        cout << i << "\n" ;

    }
  
}