#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , m ; cin >> n >> m ; 
        int arr[n][m] ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> arr[i][j] ;
            }
        }

        int mx_sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){

                int lu = 0 , ru = 0 , rd = 0 , ld = 0 ;

                //lu 
                for(int a = i , b = j ; a >= 0 && b >= 0 ; a-- , b--)lu += arr[a][b] ;
 
                //ru
                for(int a = i , b = j ; a >= 0 && b < m ; a-- , b++)ru += arr[a][b] ;
            
                //ld
                for(int a = i , b = j ; a < n && b >=  0 ; a++ , b--)ld += arr[a][b] ;

                //rd 
                for(int a = i , b = j ; a < n && b < m ; a++ , b++)rd += arr[a][b] ;


                int sum = lu + ru + ld + rd - 3*arr[i][j] ;
                mx_sum = max(sum , mx_sum) ;

            }
        }

        cout << mx_sum << "\n" ;
    }
}