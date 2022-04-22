#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n ; cin >> n ;
        int tn = n ; 
        vector<int>x ;
        while(tn--) {
            int nx ; cin >> nx ;
            x.push_back(nx);
        }
        
        int dif = 0;
        for(int i = 0 ; i < n-1 ; i++){
            dif += x[i+1] - x[i] -1 ;
        }

      
      if(dif <= 2) cout << "YES\n";
      else cout << "NO\n" ;
    }
}