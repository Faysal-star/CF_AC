#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n ; cin >> n ; 
        map<char , int> m;
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            char c ; cin >> c ; 
            if(m[c] == 0) {
                m[c] = 1 ;
                ans+=2 ;
            }
            else ans++ ;
        }
        cout << ans << endl ;
    }
}