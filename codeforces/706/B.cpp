#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    vector < int > v(n) ;
    for(auto &a:v) cin >> a ;
    sort(v.begin() , v.end()) ;
    int x ; cin >> x ; 
    while(x--){
        int t ; cin >> t ; 
        cout << (upper_bound(v.begin() , v.end() , t ) - v.begin()) <<"\n" ;
    } 

}