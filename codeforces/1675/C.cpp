#include<bits/stdc++.h>
using namespace std;

void sln(){
    string a ; 
        cin >> a ; 
        int s = a.size() ;
        if(s == 1) {
            cout << "1\n" ;
            return ;
        }
        int x = s - 1 ; 
        int y = 0 ;

        for(int i = 0 ; i < s ; i++){
            if(a[i] == '0'){
                x = i ; 
                break ;
            }
        }

        for(int i = s-1 ; i >= 0 ; i--){
            if(a[i] == '1') {
                y = i ;
                break;
            }
        }

        int ans = abs(x-y) + 1 ;
        cout << ans << "\n" ;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        
        sln() ;
    }
}
