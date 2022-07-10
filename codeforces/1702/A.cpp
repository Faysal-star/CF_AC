#include<bits/stdc++.h>
using namespace std;
long long p10(int n){
    long long ans=1;
    while(n--)ans*=10;
    return ans;
}
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n  ;
        int lg = log10(n) ;
        long long int ans  = p10(lg) ;
        cout << (n- ans) << endl ;
    }
}