#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t ; 
    while(t--){
        int n , q ; cin >> n >> q ;
        vector<int> nums ;

        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            int n ; cin >> n ;
            nums.push_back(n) ;
            sum += n ;
        }
        sort(nums.begin() , nums.end()) ;
        reverse(nums.begin() , nums.end()) ;
        vector<int> arr(n) ;
        arr[0] = nums[0] ;
        for(int i = 1 ; i < n ; i++) arr[i] = arr[i-1]+nums[i] ; 


        // for(int i = 0 ; i < n ; i++) cout << arr[i] << " " ;

        while(q--){
            int que ; cin >> que ; 
            if(sum < que) cout << "-1\n" ;
            else cout << (lower_bound(arr.begin() , arr.end() , que) - arr.begin()) + 1 <<"\n" ;
        }

    }
}