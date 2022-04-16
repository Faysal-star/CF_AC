#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m , a , b ;
    cin >> n >> m >> a >> b ;

    if(a > b) cout << ((n%m == 0)?((n/m)*b):((n/m)*b+b));
    else if(m >= n && n*a > b) cout << b ;
    else if(m*a >= b) cout << (n/m)*b + (n%m)*a ;
    else cout << n*a ;   
}