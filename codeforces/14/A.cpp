#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ; 
    cin >> n >> m ;
    char arr[n][m] ;
    vector<int> row , col ;
    for(int i = 0 ; i < n ; i++){
        int r = 0 ;
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j] ;
            if(arr[i][j] == '.'){
                r++ ;
            }
        }
        if(r == m) row.push_back(i);
        else row.push_back(-1) ;
    }

    for(int i = 0 ; i < m ; i++){
        int c = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(arr[j][i] == '.'){
                c++ ;
            }
        }
        if(c == n) col.push_back(i);
        else col.push_back(-1) ;
    }

    // for(int i = 0 ; i < col.size() ; i++) cout << col[i] << " " ;
    int row_high = 0 , col_high = 0 , row_low = n-1 , col_low = m-1 ;

    for(int i = 0 ; i < row.size() ; i++){
        if(row[i] == -1) break ;
        else row_high = i+1 ;
    }
    for(int i = row.size()-1 ; i >= 0 ; i--){
        if(row[i] == -1) break ;
        else row_low = i-1 ;
    }
    for(int i = 0 ; i < col.size() ; i++){
        if(col[i] == -1) break ;
        else col_high = i+1 ;
    }
    for(int i = col.size()-1 ; i >= 0 ; i--){
        if(col[i] == -1) break ;
        else col_low = i-1;
    }

    // cout << row_high << " " << row_low << " " << col_high << " " << col_low << "\n" ;

    for(int i = row_high ; i <= row_low ; i++){
        for(int j = col_high ; j <= col_low ; j++){
            cout << arr[i][j] ;
        }
        cout << endl ;
    }
}