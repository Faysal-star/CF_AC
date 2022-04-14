#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6] , b[10]={0} , sum=0 ;

    for(int i = 0 ; i < 6 ; i++) cin >> a[i] ;

    for(int i = 0 ; i < 6 ; i++){
        sum = sum^a[i] ;
        b[a[i]]++ ;
    }

    int f = 0 ;
    for(int i = 1 ; i <= 9 ; i++){
        if(b[i] >= 4){
            f=1 ; 
            break;
        }
    }

    if(f==1) {
        if(sum == 0) cout << "Elephant";
        else cout << "Bear";
    }
    else cout << "Alien";
}