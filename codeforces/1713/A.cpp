#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t ; 
    while(t--){
        int n ; cin >> n ; 
        int x , y;
        int xy[4] = {0};
        for(int i = 0 ; i < n ; i++){
            cin >> x >> y ;
            if(x == 0){
                xy[0] = max(xy[0] , y) ;
                xy[1] = max(xy[1] , -y) ;
            }
            else{
                xy[2] = max(xy[2] , x) ;
                xy[3] = max(xy[3] , -x) ;
            }
        }
        int ans = xy[0] + xy[1] + xy[2] + xy[3] ;
        cout << ans*2 << endl ;
    }
}