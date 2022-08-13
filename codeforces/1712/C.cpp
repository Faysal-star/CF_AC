#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int ar[n] ;
        map<int , int> m ;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            ar[i] = x ;
            m[x]++ ;
        }

        int cont = 1 ; 
        for(int i = n-1 ; i >= 0 ; i--){
            if(ar[i] >= ar[i-1]){
                cont++ ;
            }
            else break;
        }

        // cout << cont << endl ;
        map<int , int > del ;
        for(int i = 0 ; i < n-cont ; i++){
            int num = ar[i] ;
            del[num]++ ;
        }

        for(int i = n-cont ; i < n ; i++){
            int num = ar[i] ;
            if(del[num] > 0) ar[i] = 0;
        }
        
        // for(int i = 0 ; i < n ; i++){
            
        //     cout << ar[i] << " " ;
        // }

        // cout << endl ;

        int lst = 0;
        for(int i = n-1 ; i >= n-cont ; i--){
            if(ar[i] == 0){
                break ;
            }
            else lst++;
        }

        // cout << lst << endl ;

        map<int , int > lmp ;
        for(int i = 0 ; i < n-lst ; i++){
            int num = ar[i] ;
            if(num != 0) lmp[num]++ ;
        }

        cout << lmp.size() << endl ;

       
    }
}