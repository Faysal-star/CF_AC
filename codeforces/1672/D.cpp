#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int a[n] , b[n] ; 
        for(int i = 0 ; i < n ; i++) cin >> a[i] ;
        for(int i = 0 ; i < n ; i++) cin >> b[i] ;

        map<int,int> m ; 
        int flag = 1 ;

        for(int i = n -1 , j = n - 1 ; i >= 0 && j >= 0 ;){

            if(i == n-1 && j == n - 1) {
                if(a[i] != b[j]) {
                    flag = 0 ;
                    break;
                }
                else {
                    i-- ; 
                    j-- ;
                }
            }

            else {
                if(a[i] != b[j]){
                    if(b[j] == b[j+1]){
                        m[b[j]]++ ;
                        j-- ;
                    }
                    else if(m[a[i]] > 0){
                        m[a[i]]-- ;
                        i-- ;
                    }
                    else {
                        flag = 0 ;
                        break;
                    }
                }

                else {
                    i-- ;
                    j-- ;
                }
            }
        }

        cout << (flag ? "YES\n" : "NO\n") ;
        
    }
}

