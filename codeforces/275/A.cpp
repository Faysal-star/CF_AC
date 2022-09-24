#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5][5] = {0} ;
    for(int i = 1 ; i < 4 ; i++){
        for(int j = 1 ; j < 4 ; j++){
            cin >> ar[i][j] ;
        }
    }

    for(int i = 1 ; i < 4 ; i++){
        for(int j = 1 ; j < 4 ; j++){
            cout << !((ar[i][j] + ar[i+1][j] + ar[i][j+1] + ar[i-1][j] + ar[i][j-1])&1);
        }
        cout << endl ;
    }

}
