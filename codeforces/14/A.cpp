#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ; 
    cin >> n >> m ;
    char arr[n][m] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j] ;
        }
    }


    int row_high = n-1 , col_high = m-1 , row_low = 0 , col_low = 0 ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == '*'){
                row_low = max(row_low , i) ;
                col_low = max(col_low , j) ;
                row_high = min(row_high , i) ;
                col_high = min(col_high , j) ;
            }
        }
    }

    // cout << row_high <<" "<< col_high <<" "<< row_low <<" "<< col_low <<"\n" ;
   

    for(int i = row_high ; i <= row_low ; i++){
        for(int j = col_high ; j <= col_low ; j++){
            cout << arr[i][j] ;
        }
        cout << endl ;
    }
}