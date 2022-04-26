#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,r,c;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> a;
            if(a != 0 ) {
                r = i+1 ;
                c = j+1;
            }
        }
    }
    cout << abs(3-r) + abs(3 - c);

}