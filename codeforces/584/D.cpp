#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n == 2) return true ;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return false ;
    }
    return true ;
}
int main(){
    int n ; cin >> n ;
    if(prime(n)) cout << "1\n" << n ;
    else if(prime(n-2)) cout << "2\n2 " << n-2 ;
    else {
        int t ; 
        for(int i = 2 ; i <= n/2 ; i++){
            if(prime(i) && prime(n-i-3)) {
                t = i  ; 
                break ;
            }
        }

        cout << "3\n3 " << t << " " << n-t-3 ;

    }  
}