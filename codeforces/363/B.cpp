#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n , k ; 
    cin >> n >> k ; 
    int a[n] ; 
    a[0] = 0 ;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
        a[i]+=a[i-1];
    } 
    
    int idx = 0;

    int sum = a[n] ;
   
    // cout << sum << endl;
    for(int i = k ; i <= n ; i++){
        if(a[i] - a[i-k] < sum){
            sum = a[i] - a[i-k] ;
            idx = i - k ;
        }
        // cout << tsum << endl;
    }

    cout << idx+1 ;
}