#include<iostream>
using namespace std;

bool lucky(int l){
    // cout << l[0]  << " " << l[l.length()-1];
    for( ; l ; l /= 10){
        if(l % 10 == 4 || l % 10  == 7) continue;
        else {
            return false ;
        }   
    }
    return true ;
}


int main(){
    int l ;
    cin >> l ;

    if(lucky(l)) {
        cout << "YES" ;
        return 0 ;
    }
    else {
        for(int i = 1 ; i <= 1000 ; i++) {
            if(lucky(i)){
                if(l % i == 0) {
                    cout << "YES" ;
                    return 0 ;
                }
            }         
        }
    } 
    cout << "NO" ;

}