#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    string b = "" ;

    cin >> a ;

    for(int i = 0 , j = 0 ; i < a.length() ; i++ , j++){
        // cout << char (a[i]+10) << "\n";
        if(a[i] == 'a' || a[i] == 'e' ||a[i] == 'i' ||a[i] == 'o' ||a[i] == 'u' ||a[i] == 'y' || a[i] == 'A' || a[i] == 'E' ||a[i] == 'I' ||a[i] == 'O' ||a[i] == 'U' ||a[i] == 'Y'){
            continue;
        }

        if( int(a[i]) >= 65 && int(a[i]) <= 90){
            a[i] += 32 ;
        }

        b= b + '.' + a[i] ;

    }

    cout << b ;
}