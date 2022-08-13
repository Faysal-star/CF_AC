#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , k ; cin >> n  >> k ;
        map<int , int> m ;
        for(int i = 1 ; i <= n ; i++){
            int x ; cin >> x ;
            m[x] = i ;
        } 
        int cnt = 0 ;
        for(int i = 1 ; i <= k ; i++){
            if(m[i] > k) cnt++ ;
        }

        cout << cnt << endl ;
    }
}