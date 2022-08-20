#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    int t ; cin >> t ;
    while(t--){
        ll a , b , c ,d , mx , mn; 
        cin >> a >> b >> c >> d ;
        mx = max(a*d , b*c);
        mn = min(a*d , b*c);
        if(mx == mn) cout << "0\n" ;
        else if(mn == 0 || mx % mn == 0) cout << "1\n" ;
        else cout << "2\n" ;
    }
}


