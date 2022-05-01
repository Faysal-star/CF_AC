#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , x ; 
    cin >> n >> x ;
    int cnt = 0 ; 

    for(int i = 1 ; i <= sqrt(x) ; i++){
        int a = x % i ; 
        int b = x / i ; 
        if(a == 0 && b <= n){
            cnt++ ;
            if(i != b) cnt++ ;
        }
    }

    cout  << cnt ;
}