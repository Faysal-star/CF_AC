#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        long long row , col ; 
        cin >> row >> col ;
        long long ans ;

        if(row == 1 && col == 1) cout << "0\n" ;

        else if((row == 1 && col > 2) || (col == 1 && row > 2)) cout << "-1\n";

        //else if(row == col) ans = (row-1)*2 ;

        else{
            long long max = (row > col) ? row : col ;
            long long min = (row < col) ? row : col ;
            ans = 2*(min-1) ;
            long long dif = (max - min) ;

            if(dif%2 == 1){
                ans = ans + 2*dif - 1 ;
            }
            else {
                ans = ans + 2*dif ;
            }
            cout << ans <<"\n" ;
            }
    }
}