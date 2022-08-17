#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int n , tn ; cin >> n >> tn ;
        map<int , int> mp ;
        vector<int> win ;
        int nm ; cin >> nm ;
        int mx = nm ;
        mp[1] = nm ;
        for(int i=1 ; i<n ; i++){
            int nm ; cin >> nm ;
            mp[i+1] = nm ;
            mx = max(mx , nm) ;
            win.push_back(mx) ;
        }
        win.push_back(mx) ;
        
        
        while(tn--){
            int a , b ; cin >> a >> b ;
            int pl = mp[a] ;
            int match = min(n,b) ;

            int freq = upper_bound(win.begin() , win.begin()+match , pl) - lower_bound(win.begin() , win.begin()+match , pl) ;

            if(pl == mx && b > n) freq = freq + (b-n) ;
            cout << freq << endl ;
            
        }
        
    }
}

