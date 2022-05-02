#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n ; cin >> n ; 
        int ev = 0 , od = 0 ;
        vector<int> v ;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x ; 
            v.push_back(x) ; 
            if(x&1) od++ ;
            else ev++ ; 
        }

        // cout << od << " " << ev ;
        int flag = 0 ;
        if(!(ev&1) && !(od&1)){
            flag = 1 ;
        }

        else {
            sort(v.begin() , v.end()) ;
            for(int i = 0 ; i < n-1 ; i++){
                if((v[i+1] - v[i]) == 1 ){
                    flag = 1 ; 
                    break;
                }
            }
        }

        cout << (flag ? "YES\n" : "NO\n") ;
    }
}