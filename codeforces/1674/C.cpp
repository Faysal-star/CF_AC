#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        string s1 , s2 ; 
        cin >> s1 >> s2 ; 
        if((s2.length() == 1) && (s2[0] == 'a')){
            cout << "1\n";
        }

        else {
            int flag = 0 ; 
            for(int i = 0 ; i < s2.length() ; i++){
                if(s2[i] == 'a'){
                    flag = 1 ;
                    break; 
                }
            }
            if(flag) cout << "-1\n" ;
            else {
                long long int res = pow(2 , s1.length()) ; 
                cout << res << "\n" ;
            }
        }
    }
}