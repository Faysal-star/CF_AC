#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 
        int arr[s.length()] ;
        arr[0] = s[0] - 'a' + 1 ;
        for(int i = 1 ; i < s.length() ; i++) arr[i] = arr[i-1] + s[i] - 'a' + 1 ;

        if(s.length() & 1){
            if(s.length() == 1){
                cout << "Bob " << arr[s.length()-1] << "\n" ;
            }
            else {
                if(arr[s.length() - 2] > (arr[s.length()-1] - arr[0])) {
                    cout << "Alice " << (2*arr[s.length()-2] - arr[s.length()-1]) << "\n" ;
                }
                else {
                    cout << "Alice " << (arr[s.length()-1] - 2*arr[0]) << "\n" ;
                }
            }
        }

        else {
            cout << "Alice " << arr[s.length()-1] << "\n" ; 
        }
    }
}