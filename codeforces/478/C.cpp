#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    ll A , B , C ; 
    cin >> A >> B >> C ;
    ll r = max({A,B,C});
    ll g = min({A,B,C}) ; 
    ll b = A+B+C - r - g;

    cout << ((r/2 > g+b) ? (g+b) : ((r+g+b) / 3));
}