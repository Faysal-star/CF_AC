#include<bits/stdc++.h>
using namespace std;
bool chk(int x , int k){
    vector<int>v(10 , 0) ;
    while(x){
        v[x%10] = 1 ;
        x /= 10 ;
    }
    for(int i = 0 ; i <= k ; i++) {
        if(v[i] != 1) return false ;
    }
    return true ;
}
int main(){
    int n , k , cnt = 0; cin >> n >> k ;
    while(n--){
        int x ; cin >> x ;
        if(chk(x,k)) cnt++ ;
    }
    cout << cnt ;
   
}
