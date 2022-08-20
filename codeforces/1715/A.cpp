#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , m ; cin >> n >> m ;
        int cnt = 2*(min(m,n)-1) + max(m,n) ;
        if(n==m && n==1) cnt = 0 ;
        cout << cnt << endl ;
    }
}