#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ;
    while(t--){
        int n , r , b ;
        cin >> n >> r >> b ;
        int xtra = r % (b + 1) ;
        int perR = r / (b + 1) ;
        int bCount = 1 ;

        string s = "" ;
        for(int i = 0 ; i < r ;){
            if(xtra){
                s+="R" ;
                i++;
                xtra--;
            } 
            for(int j = 0 ; j < perR ; j++){
                s+="R" ;
                i++ ;
            }

            if(bCount <= b){
                s+= "B" ;
                bCount++;
            }
        }

        cout << s << "\n" ;
    }   
}