#include<iostream>
using namespace std;
int main(){
    long long int bal , big , last , last2 , newbal;
    cin >> bal ; 
    if(bal >= 0) cout << bal ;
    else{
        bal = bal * -1 ;
        last = bal % 10 ;
        last2 = (bal % 100) / 10 ; 
        big = (last > last2) ? last : last2 ;
        if(last > last2){
            newbal = bal / 10 ;
        }
        else {
            newbal = (bal / 100)*10 + last ;
        }
        cout << newbal * -1 ;
    }
    
}