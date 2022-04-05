#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i , j , n;
    cin >> i ;
    int cube[i];
    for(j = 0 ; j < i ; j++){
        cin >> cube[j];
    }
    
    sort(cube , cube+i);

    for(j=0 ; j<i ; j++){
        cout << cube[j] << " ";
    }

}