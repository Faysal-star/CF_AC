#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++) cin >> a[i] ;

        sort(a,a+n) ;

        int mini = a[1] - a[0] ;
        for(int i = 1 ; i < n ; i++){

            int tmin = a[i] - a[i-1] ;
            mini = min(tmin , mini) ;
        };


         cout <<mini << "\n" ;

    }
}