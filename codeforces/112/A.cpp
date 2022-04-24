#include<bits/stdc++.h>

using namespace std;
int main(){
    string s1 , s2 ;
    cin >> s1 >> s2 ;

    int flag = 0 ;
    for(int i = 0 ; i < s1.length() ; i++){
        if(tolower(s1[i]) != tolower(s2[i])){
            if(tolower(s1[i]) < tolower(s2[i])){
                flag = -1 ;
                break; 
            }
            else {
                flag = 1 ;
                break;
            }
        }
    }

    cout << flag ;



}