#include<iostream>
using namespace std;
bool pali(string s){
    for(int i = 0 , j = s.length()-1 ; i < j ; i++ , j--){
        if(s[i] != s[j]) return false ;
    }
    return true;
}

bool allSame(string s){
    for(int i = 0 ; i < s.length()-1 ; i++){
        if(s[i] != s[i+1]) return false ;
    }
    return true;
}

int main(){
    int len ; 
    string s ; cin >> s ;
    if(allSame(s)) cout << '0';
    else if(pali(s)) cout << s.length()-1;
    else cout << s.length() ; 

}
