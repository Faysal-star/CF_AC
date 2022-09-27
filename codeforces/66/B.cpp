#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    int mx = 0 ; 
    for(int i = 0 ; i < n ; i++){
        int f = 1 , ff=0, tmx = 1;
        for(int j = i ; j<n-1 ; j++){
            if(a[j] > a[j+1] && ff < 1) f = -1 , ff++;
            if(f* a[j] <= f*a[j+1]) tmx++ ;
            else break ;
        }
        mx = max(mx , tmx) ;

    }
    cout << mx ;
}