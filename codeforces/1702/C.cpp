#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n , q ; 
        cin >> n >> q ;
        map<int , pair<int , int> > mp ;
        for(int i = 0 ; i < n ; i++){
            int a ; cin >> a ;
            if(mp[a].first == 0) mp[a].first = i+1 ;
            mp[a].second = max(mp[a].second , i+1) ;
        }

        while(q--){
            int x , y ; cin >> x >> y ;
            if(mp[x].first < mp[y].second && (mp[x].first && mp[y].second)){
                cout << "YES\n" ;
            }
            else{
                cout << "NO\n";
            }
        }
    }
}