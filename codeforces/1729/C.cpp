#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        string ts ; cin >> ts ;
        string s = ts ; 
        int sum = 0 ; 
        int tile = 0 ;
        int l = s.size() -1 ;
        vector<int> vp ;
        map<char , vector<int >> mp ;

        for(int i = 0 ; i < ts.size() ; i++ ) mp[ts[i]].push_back(i+1) ;
        sort(ts.begin() , ts.end()) ;
        string ns = "" ;

        for(int i = l ; i >= 0 ; i--){
            if((ts[i] <= s[0] && ts[i] >= s[l]) || (ts[i] >= s[0] && ts[i] <= s[l])) {
                ns += ts[i] ; tile++ ;
                sum += abs(ts[i] - ns[(ns.length() - 2)%ns.length()]) ;
            }
        }
        cout << sum << " " << tile << endl ;
        if(s[0] != ns[0]) reverse(ns.begin() , ns.end()) ;

        for(int i = 0 ; i < ns.length() ; i++){
            if(ns[i] == ns[i-1]) continue; 
            sort(mp[ns[i]].begin() , mp[ns[i]].end()) ;
            for(int j = 0 ; j < mp[ns[i]].size() ; j++) cout << mp[ns[i]][j] << " " ;
        }
        cout << endl ;
    }
}