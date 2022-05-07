#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ; 
        int nums[n] , minus = 0 , flag = 1;

        for(int i = 0 ; i < n ; i++){
            cin >> nums[i] ;
            if(nums[i] < 0) minus++ ;
        } 
        for(int i = 0 ; i < n ; i++){
            if(i < minus && nums[i] > 0) nums[i] *= -1 ;
            if(i >= minus && nums[i] < 0) nums[i] *= -1 ;
        }
        for(int i = 0 ; i < n-1 ; i++) {
            if(nums[i] > nums[i+1]){
                flag = 0 ; 
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n") ;
    }
}