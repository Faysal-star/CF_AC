#include<iostream>
using namespace std;
int main(){
    int min , a , b ;

    cin >> a >> b ;

    min = (a < b) ? a : b ;

    if(min % 2 == 0) cout << "Malvika";
    else cout << "Akshat";
}