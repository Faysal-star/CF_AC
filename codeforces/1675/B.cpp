#include<bits/stdc++.h>
typedef long long ll ;
using namespace std;
int main(){
    int t ; cin  >> t ; 
    while(t--){
        int n ; cin >> n ; 
        ll arr[n] ;
        for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

        ll cnt = 0 ;

        for(int i = 0 ; i < n-1 ; i++){

            if(arr[i] == 0 && arr[i+1] == 0){
                cnt = -1 ; 
                break;
            }
            if(arr[i] >= arr[i+1]){
                arr[i] /= 2 ;
                i = -1 ;
                cnt++ ;
            }

        }

        cout << cnt << "\n" ;
    }
}