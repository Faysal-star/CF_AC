#include<bits/stdc++.h>
using namespace std;
int main(){
    int i , b=0 , w=0;
    char s ;
    for(i = 64 ; i ; i--){
            cin >> s ;

            if(s >= 'a' && s<= 'z'){
                     if(s=='q') b+= 9 ;
                else if(s=='r') b+= 5 ;
                else if(s=='b') b+= 3 ;
                else if(s=='n') b+= 3 ;
                else if(s=='p') b+= 1 ;
            }
            else if(s >= 'A' && s<= 'Z'){
                     if(s=='Q') w+= 9 ;
                else if(s=='R') w+= 5 ;
                else if(s=='B') w+= 3 ;
                else if(s=='N') w+= 3 ;
                else if(s=='P') w+= 1 ;
            }
           
    }

    if(b > w) cout <<" Black";
    else if(b<w) cout << "White";
    else cout << "Draw";
}