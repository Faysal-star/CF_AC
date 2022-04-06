#include<iostream>
using namespace std;
int main(){
    string a , b ;
    int count=0 ;
    cin >> a >> b ;
    if(a == b) {
        cout << '0';
        return 0;
    }
    int min = (a.length() < b.length()) ? a.length() : b.length() ;
    for(int i = 1; i >= 0  ; i++){
        if(a[a.length() - i] == b[b.length() - i]) count++;
        else break;
    }
    
    cout << a.length() + b.length() - count*2 ;
    return 0;
}