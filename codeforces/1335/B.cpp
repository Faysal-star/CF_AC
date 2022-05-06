#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , a , b ;
        cin >> n >> a >> b ; 
        string s = "";

        for(int i = 0 ; i < n ; i++){
            char x = 'a' + i % b ;
            s+= x ;
        }

        cout << s << "\n";


    }
}