#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; 
        cin >> n ;
        vector<string> v ;
        map<string , int > mp ;
        for(int i = 0 ; i < n ; i++){
            string s ; cin >> s ;
            v.push_back(s) ;
            mp[s]++ ;
        }

        string final = ""  ;
        for(int i = 0 ; i < n ; i++){
            int l = 0 ;
            int firstSeg = 0 ; 
            int secondSeg = 0 ;
            for(int j = 0 ; j < v[i].length() ; j++){
                if(v[i].substr(0,j) == v[i]) continue ;
                else if(mp[v[i].substr(0 , j)] != 0){
                    firstSeg = 1 ;
                    l = j ;
                }
                // cout << v[i].substr(0 , j) << " ";
                if(firstSeg == 1 && l==j){
                    if(mp[v[i].substr(l , v[i].length()-1)] != 0){
                        secondSeg = 1 ;
                        break ;
                    }

                }
            }
            
            if(firstSeg && secondSeg) final+= '1' ;
            else final+= '0' ;
        }

        cout << final << endl ;
    }
}