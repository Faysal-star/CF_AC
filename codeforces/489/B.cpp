#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n ;
    int boy[n] ;
    for(int i=0 ; i<n ; i++) cin >> boy[i];
    cin >> m ;
    int girl[m] ;
    for(int i=0 ; i<m ; i++) cin >> girl[i];

    sort(boy , boy+n);
    sort(girl , girl+m);
    int count = 0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(abs(boy[i] - girl[j]) <= 1) {
                count++ ;
                girl[j] = 111;
                break ;
            }
        }
    }
    cout << count ;
       
}