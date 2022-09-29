#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int mx = *max_element(v.begin() , v.end()) ;
    int mn = *min_element(v.begin() , v.end()) ;
    int mnn , mxx ;
    for(mxx = 0 ; mxx < n ; mxx++) if(v[mxx] == mx) break ;
    for(mnn = n-1 ; mnn>=0 ; mnn--) if(v[mnn] == mn) break ;

    if(mnn < mxx) cout << n - mnn + mxx - 2;
    else cout << n - mnn + mxx - 1 ;
    
}