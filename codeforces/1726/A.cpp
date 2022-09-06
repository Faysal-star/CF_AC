#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int  n ; cin >> n ; 
        vector<int> a(n) , b(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
            b[i] = a[i] ;
        }

        sort(b.begin() , b.end()) ;

        if(n==1) cout << "0\n" ;
        else if(b[0] == a[0] || b[n-1] == a[n-1] ) cout << b[n-1] - b[0] << endl ;
        else{
            int mx = INT_MIN ;
            for(int i = 0 ; i < n-1 ; i++){
                mx = max(mx , a[i] - a[i+1]) ;
            }

            cout << max((b[n-1] - a[0]) ,max(mx , (a[n-1] - b[0]))) << endl ;
        }
    }
}
