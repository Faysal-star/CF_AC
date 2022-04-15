#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n , m , prev=1 , pres , sum = 0;
    cin >> n >> m ;
    while(m--){
        cin >> pres ;
        if(pres >= prev) sum = sum + pres - prev ;
        else sum = sum + (n-prev) + pres ;

        prev = pres ;
    }   
    cout << sum ;
}