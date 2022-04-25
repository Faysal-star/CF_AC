#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int lg ;
         int cnt = 0 ;

        for(int i = 0 ; i < n ; i++){

            cin >> lg;
            cnt += lg-1 ;
        }

        if(cnt & 1) cout << "errorgorn\n" ;
        else cout << "maomao90\n";

       
 
    }
}