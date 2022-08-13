#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int arr[n] ;
        if(n == 1) cout << "1" ;
        else {

            for(int i = 0 ; i < n ; i++){
            arr[i] = i+1 ;
            }

            for(int i = n-1 ; i > 0 ; i-=2){
                swap(arr[i] , arr[i - 1]);
            }
            for(int i = 0 ; i < n ; i++){
                cout << arr[i] << " " ;
            }
        }
        

        cout << endl ;

    }
}