#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int num ; cin >> num ; 
        int sum = num ; 
        int mn = num ;
        for(int i = 1 ; i < n ; i++){
            int num2 ; cin >> num2 ;
            sum += num2 ; 
            mn = min(mn , num2) ;
        } 

        cout << (sum - mn*n) << "\n" ;
    }
}