#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int arr[n] ;
        for(int i=0;i<n;i++)cin >> arr[i] ;
        int ans = 0;
        map<int , int> mp ;
        for(int i = n-1 ; i >= 0 ; i--){
            int num = arr[i] ;
            if(mp[num] == 0){
                mp[num] = 1 ;
                ans++ ;
            }
            else break;
        }
        cout << n-ans << endl ;

    }
}