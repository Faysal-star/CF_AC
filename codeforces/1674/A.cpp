#include<bits/stdc++.h>
using namespace std;
float lab(float a, float b)
{
    return log2(a) / log2(b);
}
int main(){
    int t ; cin >> t ; 
    while(t--){
        int x , y ; 
        cin >> x >> y ; 
        if(x > y) cout << "0 0\n" ; 
        else if(x == y) cout << "3 1\n" ;
        else {
            if(y % x != 0) cout <<  "0 0\n" ; 
            else {
                int p = y / x ;
                int b , a; 
                for(int i = 2 ; ;i++){
                    b = i ;
                    a = lab(p , b) ;
                    if(floor(lab(p , i)) == ceil(lab(p , i))){ 
                        cout << a << " " << b << "\n"; 
                        break ;
                    }
                    else if(pow(b , a) > p){
                        cout << "0 0\n" ;
                        break ;
                    } 
                }
                
            }
        }
    }
}