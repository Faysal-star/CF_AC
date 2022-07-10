#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        string s ; 
        cin >> s ;
        map<char , int> mp ;
        int ans = 0 ; 
        int x = 0 , lst;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = x ;
                x++ ;
            }
            if(x > 3) {
                ans++ ;
                x = 0 ;
                mp.clear();
                lst = i ; 
                i-- ;
            }
            
        }
    
        if(x!=0) ans++ ;
        cout << ans << endl ;
    }
}