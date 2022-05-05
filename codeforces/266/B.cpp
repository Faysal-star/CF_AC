#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , t ; 
    cin >> n >> t ;
    char bg[n] ;
    for(int i = 0 ; i < n ; i++) cin >> bg[i] ;
    
    while(t--){
        for(int i = 0 ; i < n-1 ; i++){
            if(bg[i] == 'B' && bg[i+1] == 'G'){
                swap(bg[i],bg[i+1]);
                i++;
            }    
        }
    }
    
    for(int i = 0 ; i < n ; i++) cout << bg[i] ;
}