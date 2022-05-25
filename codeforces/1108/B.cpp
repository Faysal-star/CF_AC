#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; 
    int arr[n] ; 
    for(auto &x : arr) cin >> x ;
    sort(arr , arr+n) ;
    cout << arr[n-1] << " " ;
    map<int , int > mp ; 
    for(int i = 0 ; i < n ; i++) {
        int nm = arr[i] ;
        if((mp[nm] == 0) && (arr[n-1]%arr[i] == 0)) {
            arr[i] = 0 ; 
            mp[nm]++ ;
        } 
    }

    sort(arr , arr+n) ;
    cout << arr[n-1] ;
}