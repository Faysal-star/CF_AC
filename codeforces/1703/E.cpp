#include<bits/stdc++.h>
using namespace std;
char arr9[101][101];
char arr18[101][101];
char arr36[101][101];

void r90(char mat[101][101] , int N)
{
    for (int i = 0; i < N; i++)
        reverse(mat[i], mat[i] + N);
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++)
            swap(mat[i][j], mat[j][i]);
    }
}


int main(){
    int t ; cin >> t ; 
    while(t--){
        int N ; cin >> N ;
        char arr[101][101];
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                cin >> arr[i][j];
                arr9[i][j] = arr[i][j];
                arr18[i][j] = arr[i][j];
                arr36[i][j] = arr[i][j];
            }
        }
        
        r90(arr9,N);
        r90(arr18,N);
        r90(arr18,N);
        r90(arr36,N);
        r90(arr36,N);
        r90(arr36,N);
    

        int ans = 0 ;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                int zero = 0 , one = 0 ; 
                if(arr[i][j] == '0') zero++ ;
                else if(arr[i][j] == '1') one++ ;
                if(arr9[i][j] == '0') zero++ ;
                else if(arr9[i][j] == '1') one++ ;
                if(arr18[i][j] == '0') zero++ ;
                else if(arr18[i][j] == '1') one++ ;
                if(arr36[i][j] == '0') zero++ ;
                else if(arr36[i][j] == '1') one++ ;

                if(zero != 0 || one != 0) {
                    ans += min(zero , one) ;
                }
            }
        }

        cout << ans/4 << endl ;

    }
}