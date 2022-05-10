#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , m ; cin >> n >> m ; 
        vector<string> str ; 
        for(int i = 0 ; i < n ; i++){
            string s ; cin >> s ;
            str.push_back(s) ;
        }
        vector<int> sums ;
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                int chs = 0 ; 
                for(int z = 0 ; z < m ; z++){
                    chs += abs(str[j][z] - str[i][z]) ;
                }
                sums.push_back(chs) ;
            }
        }

        sort(sums.begin() , sums.end()) ;

        cout << sums[0] << "\n" ;

    }

    
}