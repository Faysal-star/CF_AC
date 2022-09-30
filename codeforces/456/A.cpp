#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    map<int , int > mp ;
    vector<int> v(n) , v2(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] >> v2[i] ;
        mp[v[i]] = v2[i] ;
    }

    sort(v.begin() , v.end()) ; sort(v2.begin() , v2.end()) ;
    int f = 0 ; 
    for(int i = 0 ; i < n ; i++ ){
        if(mp[v[i]] != v2[i]) {f = 1 ; break; } 
    }

    if(f) cout << "Happy Alex";
    else cout <<  "Poor Alex" ;

   
}