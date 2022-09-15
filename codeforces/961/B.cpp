#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    ll n , k ; cin >> n >> k;
    vector<ll> a(n) , b(n) , as , bs;
    as.push_back(0) ; bs.push_back(0) ;
    cin >> a[0] ; as.push_back(a[0]) ;
    for(ll i = 1 ; i < n ; i++){
        cin >> a[i] ;
        as.push_back(a[i]+as[i]) ;
    }
    cin >> b[0] ; 
    if(b[0]) bs.push_back(as[1]);
    else bs.push_back(0);
    for(ll i = 1 ; i < n ; i++){
        cin >> b[i] ;
        if(b[i]) bs.push_back(bs[i] + a[i]) ;
        else bs.push_back(bs[i]);
    }

    ll mx = INT_MIN ;
    for(ll p = 0 ; p < n; p++){
        if(p+k > n) break ;
        ll ghum = b[p] ? (bs[(p+k)] - bs[p]) : (bs[(p+k)] - bs[p+1]) ;
        ll wake = as[(p+k)] - as[p] ;
        ll tot = bs[bs.size() -1] + wake - ghum ;
        mx = max(mx , tot) ; 
    }
    cout << mx ;

   
}