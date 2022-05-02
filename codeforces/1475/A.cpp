#include<iostream>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        long long x ; cin >> x ;
        cout << ((x & (x-1)) ? "YES\n" : "NO\n") ;
    }
}
