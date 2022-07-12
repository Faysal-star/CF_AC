#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int arr[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            int chs ; cin >> chs ;
            for(int j = 0 ; j < chs ; j++){
                char ch ; cin >> ch ;
                if(ch == 'D') arr[i]++ ;
                else if(ch == 'U') arr[i]-- ;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0) arr[i] = 10 + arr[i] ;
            cout << arr[i]%10 << " " ;
        }
        cout << endl ;
    }
}